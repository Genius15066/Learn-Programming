/*

Date: 2nd August 2021
Problem Name: Partition Equal Subset Sum
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
    int partition_equal_sum(int n, int a[])
    {
        
    int sum=0;
    for(int i = 0; i < n; i++){
           sum+=a[i];
    }

    if(sum==0) return 1;
    if(sum & 1) return 0;
    
    int p=sum/2;
    int dp[n+1][p+1];

    for(int i=0;i<=n;i++){
       dp[i][0]=true;
    }
    for(int i=1;i<=p;i++){
       dp[0][i]=false;
    }

    for(int i=1; i<=n;i++){
        for(int j=1; j<=p; j++){

             if(j<a[i-1]){
                 dp[i][j]=dp[i-1][j];    
             }

             else{
                  dp[i][j]=dp[i-1][j-a[i-1]] || dp[i-1][j]; 
             }      
         }
       }
       
       for(int i=0; i<=n;i++){
           for(int j=0;j<=p; j++){
               cout<<dp[i][j]<<" ";
           }
           cout<<endl;
       }
       return dp[n][p];

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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.partition_equal_sum(n, arr) << endl;
    }
    return 0;
}
