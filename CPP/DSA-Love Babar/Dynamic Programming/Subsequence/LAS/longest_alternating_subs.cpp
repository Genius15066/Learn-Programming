/*

Date: 01st August 2021
Problem Name: Longest Alternating subsequence 
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
    int lcs_diff1(int n, int a[])
    {
         int increasing=1;
        int decreasing=1;

        for(int i=1;i<n;i++){
          if(a[i]>a[i-1]){
              decreasing=increasing+1;
          }
           if(a[i]<a[i-1]){
              increasing=1+decreasing;
          }
        }
        return max(increasing, decreasing);
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
