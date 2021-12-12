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
    int fibo[n];
    fibo[0] = 0, fibo[1] = 1;
    for (int i = 2; i <=n; i++)
    {
        fibo[i] = fibo[i -1] + fibo[i -2];
    }
    return fibo[n];
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

    ll i = 0, x;
    cin >> x;
    while (i < x)
    {
        cout << " " << solve(i);
        i++;
    }
    cout<<endl;
    return 0;
}