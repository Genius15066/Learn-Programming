#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;


class Solution
{
    public:
    int lcs(string s1, string s2)
    {
       int x=s1.length();
       int y=s2.length();
       int arr[2][y+1];
        bool bi;
          for(int i=0;i<=x;i++){
              bi=i & 1;
            for(int j=0;j<=y;j++){
                if(i==0 || j==0){
                    arr[bi][j] =0;
                }

                else{
                    if(s1[i-1]==s2[j-1] ){
                        arr[bi][j] =1+arr[1-bi][j-1];
                    }
                    else{
                        arr[bi][j] =max(arr[1-bi][j],arr[bi][j-1]);
                    }
                }
            }
        }

        for(int i=0;i<2;i++){
            for(int j=0;j<=y;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }

        return arr[bi][y]; 
    }
};


// { Driver Code Starts.
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
     freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int t;
    cin>>t;
    while(t--)
    {         
        string s1,s2;
        cin>>s1>>s2;  
        Solution ob;
        cout << ob.lcs(s1,s2) << endl;
    }
    return 0;
}