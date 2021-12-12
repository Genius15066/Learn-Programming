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

    while(n--){
        int a,b,c;
        cin>>a>>b>>c;

        int total=a*1+b*2+c*3;

        total%2==0?cout<<0<<endl:cout<<1<<endl;
    }


    return 0;
}