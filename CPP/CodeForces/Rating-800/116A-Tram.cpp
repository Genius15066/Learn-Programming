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
 
    int n;
    cin>>n;
    
    int x,m;
    x=m=0;


    while(n--){
        int a,b;
        cin>>a>>b;
        
        x=x-a+b;
        m=max(m,x);

    }

    cout<<m;


    return 0;
}