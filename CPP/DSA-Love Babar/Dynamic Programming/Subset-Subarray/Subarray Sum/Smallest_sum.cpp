/*

Date: 2nd August 2021
Problem Name: Smallest Sum Contiguous Subarray (kadane Algorithm)
Solution type: Dynamic Programming 
Time Complexity: O(n)
Space Complexity:O(1)

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

class Solution
{
public:
    int smallest_sum(int n, int a[])
    {
        
    int sum=a[0],best=a[0];
    for(int i=1;i<n;i++){
       sum=min(a[i],sum+a[i]);
       best=min(best,sum);
    }
    return best;

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
        cout << ob.smallest_sum(n, arr) << endl;
    }
    return 0;
}
