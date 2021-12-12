#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;


class Solution
{
    public:
    int lis(int n,int a[])
    {
        int length[n];
       for(int i=0;i<n;i++){
           length[i]=1;
       }
       int maxi=1;
       for(int i=1;i<n;i++){
           int temp=length[i];
           for(int j=0;j<i;j++){
               if(a[i]>a[j]){
                   temp=max(temp,length[j]+1);
               }
           }
           length[i]=temp;
           maxi=max(length[i],maxi);
       }

       for(int i=0;i<n;i++){
           cout<<length[i]<<" ";
       } 
       cout<<endl;
       return maxi;
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
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }  
        Solution ob;
        cout << ob.lis(n,arr) << endl;
    }
    return 0;
}