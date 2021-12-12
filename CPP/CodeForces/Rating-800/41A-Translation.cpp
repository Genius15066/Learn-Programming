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
     string s,t;
     cin>>s>>t;

     reverse(s.begin(),s.end());

     s==t?cout<<"YES":cout<<"NO"<<endl;

    return 0;
}