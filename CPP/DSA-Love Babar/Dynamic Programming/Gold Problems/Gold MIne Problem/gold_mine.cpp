/*

Date: 3rd August 2021
Problem Name: Gold Mine Problem
Solution type: Dynamic Programming 
Time Complexity: O(n^2)
Space Complexity:O(n^2)

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

class Solution
{
public:
    int gold_mine(vector<vector<int>> &gold)
    {
      int m=gold.size();
      int n=gold[0].size();

      int dp[m][n];
      int maxi=INT_MIN;

      for(int j=n-1;j>=0;j--){
          for(int i=0;i<m;i++){
              int temp;

              if(j==n-1){
                  temp=gold[i][n-1];
              }
              else if(m>1 && i==0){
                 temp=gold[i][j]+max(dp[i][j+1],dp[i+1][j+1]);
              }
              else if(m>1 && i==m-1){
                 temp=gold[i][j]+max(dp[i][j+1],dp[i-1][j+1]);
              }

              else if(m==1){
                  temp=gold[i][j]+dp[i][j+1];
              }
              else{
                  temp=gold[i][j]+max(dp[i][j+1],max(dp[i-1][j+1],dp[i+1][j+1]));
              }
              dp[i][j]=temp;

              maxi<dp[i][j]?maxi=dp[i][j]:maxi;
          }
      }


      for(int i=0; i<m; i++){
          for(int j=0; j<n; j++){
              cout<<dp[i][j]<<" ";
          }
          cout<<endl;
      }

      return maxi;
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
        int m,n;
        cin>>m>>n;
       vector<vector<int>> v( m , vector<int> (n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
            }
        }
        Solution ob;
        cout<<ob.gold_mine(v)<<endl;
    }
    return 0;
}
