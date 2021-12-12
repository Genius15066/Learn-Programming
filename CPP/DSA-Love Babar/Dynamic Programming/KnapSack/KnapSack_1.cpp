#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int knapSack(vector<int>&weight,vector<int>&profit,int n,int w)
{
    int arr[n+1][w+1];

    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
             if (i == 0 || j == 0)
                arr[i][j] = 0;
            else if(weight[i-1]<=j){
                arr[i][j] =max(arr[i-1][j],profit[i-1]+arr[i-1][j-weight[i-1]]);
            }
            else{
                arr[i][j] =arr[i-1][j];
            }
        }
    }


     for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return arr[n][w];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("../../Xtra/input.txt", "r", stdin);
    freopen("../../Xtra/output.txt", "w", stdout);
#endif

   ll n;
   cin>>n;
   vector<int>weight(n);
   vector<int>profit(n);
   for(int i=0;i<n;i++ ){
       cin>>weight[i];
   }
   for(int i=0;i<n;i++ ){
       cin>>profit[i];
   }
   ll w;
   cin>>w;
    cout<<knapSack(weight,profit,n,w)<<endl;
    return 0;
}