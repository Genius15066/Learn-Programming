/*

Date: 4th August 2021
Problem Name: Maximize the Cut Segment
Solution type: Dynamic Programming 
Time Complexity: O(n)
Space Complexity:O(n)

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

class Solution
{
public:
     int maxCut(int n, int x,int y,int z){
         int dp[n+1];
         memset(dp,-1,sizeof(dp));
         dp[0]=0;

         for(int i=0;i<=n;i++){
              if (dp[i] == -1)
                continue;
             if(i+x<=n){
                 dp[i+x]=max(dp[i+x],dp[i]+1);
             }
             if(i+y<=n){
                 dp[i+y]=max(dp[i+y],dp[i]+1);
             }
             if(i+z<=n){
                 dp[i+z]=max(dp[i+z],dp[i]+1);
             }
         }
         
         for(int i=0;i<=n; i++){
             cout<<dp[i]<<" ";
         }

         if(dp[n]==-1){
             return 0;
         }
         return dp[n];
    }
};

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../../../Utilities/input.txt", "r", stdin);
    freopen("../../../Utilities/output.txt", "w", stdout);
#endif

    ll test;
    cin >> test;
    while (test--)
    {
        int n,x,y,z;
        cin>>n>>x>>y>>z;
        Solution ob;
        cout << ob.maxCut(n,x,y,z)<< endl;
    }
    
    return 0;
}
