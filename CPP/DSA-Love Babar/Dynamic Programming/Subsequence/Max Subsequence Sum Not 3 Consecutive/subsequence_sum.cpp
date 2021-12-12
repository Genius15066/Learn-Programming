/*

Date: 1st August 2021
Problem Name: Maximum Subsequence Sum Such That no Three are Consecutive
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
    int subsequence_sum(vector<int> &data)
    {
        int n=data.size();
        int dp[n];
        
        if(n==0){
            return 0;
        }
        if(n>=1){
            dp[0]=data[0];
        }
        if(n>=2){
            dp[1]=data[1]+data[0];
        }
        if(n>2){
            dp[2]=max(dp[1],max(data[0]+data[2],data[1]+data[2]));
        }

        for(int i=3;i<n;i++){
            dp[i]=max(dp[i-1],max(dp[i-2]+data[i],data[i-1]+data[i]+dp[i-3]));
        }

        for(int i=0;i<n;i++){
            cout<<dp[i]<<" ";
        }
        return dp[n-1];
      
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
        cin>>n;

        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        Solution ob;
        cout << ob.subsequence_sum(v) << endl;
    }
    return 0;
}
