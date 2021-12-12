/*

Date: 01st August 2021
Problem Name: Count all subsequences having product less than K
Solution type: Dynamic Programming 
Time Complexity: O(n*k)
Space Complexity:O(n*k)

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

class Solution{
    public:
    int product_less_k(int n,int k,int arr[]){
       int dp[k + 1][n + 1];
    memset(dp, 0, sizeof(dp));
 
    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= n; j++) {
    
            dp[i][j] = dp[i][j - 1];

            if (arr[j - 1] <= i && arr[j - 1] > 0)
                dp[i][j] += dp[i/arr[j-1]][j-1] + 1;
        }
    }
    for(int i = 0; i <= k; i++) {
        for(int j = 0; j <= n; j++) {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[k][n];
    }
     
};

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../../../Utilities/input.txt", "r", stdin);
    freopen("../../../Utilities/output.txt", "w", stdout);
#endif

    ll test;
    cin>>test;
    while(test--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }  
        Solution ob;
        cout << ob.product_less_k(n,k,arr) << endl;
    }
    return 0;
}
