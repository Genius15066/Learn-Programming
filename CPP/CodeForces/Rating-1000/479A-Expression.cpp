#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../Utilities/input.txt", "r", stdin);
    freopen("../Utilities/output.txt", "w", stdout);
#endif
     int a,b,c;
     cin>>a>>b>>c;
    
     int result1=a+(b*c);
     int result2=a*(b+c);
     int result3=(a+b)*c;
     int result4=a*b*c;
     int result5=a+b+c;
     int final=max(result1,max(result2,max(result3,max(result4,result5))));
     cout<<final;
    return 0;
}