#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

class Solution
{
    public:
    int lcs(int x, int y, string s1, string s2)
    {
        int arr[x+1][y+1];
        for(int i=0;i<=x;i++){
            for(int j=0;j<=y;j++){
                if(i==0|| j==0){
                    arr[i][j]=0;
                }
                else{
                    if(s1[i-1]==s2[j-1]){
                        arr[i][j]=1+arr[i-1][j-1];
                    }
                    else{
                        arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
                    }
                }
            }
        }

        for(int i=0;i<=x;i++){
            for(int j=0;j<=y;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        return arr[x][y];
    }
};
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../../Xtra/input.txt", "r", stdin);
    freopen("../../Xtra/output.txt", "w", stdout);
#endif

    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          
        string s1,s2;
        cin>>s1>>s2;       
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}