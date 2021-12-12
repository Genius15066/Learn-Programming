#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../Utilities/input.txt", "r", stdin);
    freopen("../Utilities/output.txt", "w", stdout);
#endif
    int test;
    cin>>test;

    while(test--){
        ll a,b,c;
        cin>>a>>b>>c;

       ll x,y,z;

       x=max(0ll,(1+max(b,c)-a));
       y=max(0ll,(1+max(a,c)-b));
       z=max(0ll,(1+max(a,b)-c));
       
       cout<<x<<" " <<y<<" " <<z<<endl;
    }

    return 0;
}