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
     int n,k;
     cin>>n>>k;

     while(k--){
         if(n%10==0){
             n=n/10;
         }
         else{
             n=n-1;
         }
     }
     cout<<n<<endl;

    return 0;
}