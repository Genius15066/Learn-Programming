#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

class Solution
{
public:
    int solve(int prices[], int n, int k)
    {
         k>n/2?k=n/2:k;
        int profit[k + 1][n];
        for (int i = 0; i <= k; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 || j == 0)
                {
                    profit[i][j] = 0;
                }
            }
        }

        for (int i = 1; i <= k; i++)
        {
            int maxD = INT_MIN;
            for (int j = 1; j < n; j++)
            {
                if (profit[i - 1][j - 1] - prices[j - 1] > maxD)
                {
                    maxD = profit[i - 1][j - 1] - prices[j - 1];
                }
                profit[i][j]=max(profit[i][j-1],prices[j]+maxD);
            }
        }

        for (int i = 0; i <= k; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << profit[i][j] << " ";
            }
            cout << endl;
        }

        return profit[k][n - 1];
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ll test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        int v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        Solution ob;
        cout << ob.solve(v, n, k) << endl;
    }
    return 0;
}
