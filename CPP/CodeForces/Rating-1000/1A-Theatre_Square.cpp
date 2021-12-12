/*
Date: 01 October 2021
Problem type: Math
Solution type: Brute Force
Time Complexity: O(1)
Space Complexity:O(1)
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../Utilities/input.txt", "r", stdin);
    freopen("../Utilities/output.txt", "w", stdout);
#endif

   ll n,m,a;
   cin>>n>>m>>a;

   (n%a==0)?n=n/a:n=(n/a)+1;
   (m%a==0)?m=m/a:m=(m/a)+1;
   cout<<n*m;
    return 0;
}