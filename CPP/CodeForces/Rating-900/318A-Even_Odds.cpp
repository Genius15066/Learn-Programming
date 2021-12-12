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
 
     ll n,k;
     cin>>n>>k;

     ll z;

     n%2==0? z=n/2:z=(n+1)/2;

     k<=z? cout<< 2*(k-1)+1<<endl: cout<< 2*(k-z)<<endl;


    return 0;
}