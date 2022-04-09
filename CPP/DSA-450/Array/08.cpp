/*
    Problem Name:  Kadanae's Algorithm problem
    Solving Date: 29-03-2022
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int KadanesAlgo(vector<int> &a, int n)
    {
       int best=-INT_MAX,sum=0;
       for(int i=0;i<n;i++){
           sum=max(a[i],sum+a[i]);
           best=max(best,sum);
       }
       return best;
    }
};

void run()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../Utilities/input.txt", "r", stdin);
    freopen("../Utilities/output.txt", "w", stdout);
#endif
}

int32_t main()
{
    run();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }

        Solution ob;
        int maxSum=ob.KadanesAlgo(a, n);
        cout<<maxSum<<endl;
    }
    return 0;
}