/*

Date: 2nd August 2021
Problem Name: Longest Common Substring
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
    int longest_common_substring(string s1, string s2)
    {
        int z=0;
          int m=s1.size(),n=s2.size();
          int dp[m+1][n+1];
             for(int i=0; i<= m; i++){
              for(int j=0; j<= n; j++){
                  dp[i][j]=0;
              }
          }
          
              for(int i=1;i<=m;i++){
              for(int j=1;j<=n;j++){
                  if(s1[i-1]==s2[j-1]){
                      dp[i][j] =1+dp[i-1][j-1];
                      if (dp[i][j] > z) {
                         z = dp[i][j];
                       }
                  }
              }
          }

          for(int i=0; i<=m; i++){
              for(int j=0; j<=n; j++){
                  cout<<dp[i][j]<<" ";
              }
              cout<<endl;
          }
          return z;
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
        string s1,s2;
        cin>>s1>>s2;
    
        Solution ob;
        cout << ob.longest_common_substring(s1,s2) << endl;
    }
    return 0;
}
