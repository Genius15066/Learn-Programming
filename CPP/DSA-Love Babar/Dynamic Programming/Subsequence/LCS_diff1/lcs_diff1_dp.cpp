/*

Date: 01st August 2021
Problem Name: Longest subsequence such that difference between adjacent is one
Solution type: Dynamic Programming 
Time Complexity: O(n*n)
Space Complexity:O(n)

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

class Solution
{
public:
    int lcs_diff1(int n, int a[])
    {
        int dp[n];
        int maxi = 1;
        for (int i = 0; i < n; i++)
        {
            dp[i] = 1;
        }

        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                int diff = abs(a[i] - a[j]);
                if (diff == 1)
                {
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
            maxi = max(dp[i], maxi);
        }

        for (int i = 0; i < n; i++)
        {
            cout << dp[i] << " ";
        }
        cout << endl;
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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.lcs_diff1(n, arr) << endl;
    }
    return 0;
}
