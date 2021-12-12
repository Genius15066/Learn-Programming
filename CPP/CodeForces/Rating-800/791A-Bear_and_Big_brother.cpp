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
 
    int a,b;
    cin>>a>>b;

    int x=1;

    while(a<=b){
        a=3*a;
        b=2*b;

        if(a<=b){
            x++;
        }
    }

    cout<<x<<endl;


    return 0;
}