#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int solve(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return solve(n - 1) + solve(n - 2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("../../Xtra/input.txt", "r", stdin);
    freopen("../../Xtra/output.txt", "w", stdout);
#endif

     ll i=0,x;
     cin>>x;
    while(i < x) {
      cout << " " << solve(i);
      i++;
   }
    return 0;
}
