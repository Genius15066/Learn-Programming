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
     int presents[n];
     int exchange[n];

     for (int i = 0; i < n; i++){
         cin>>presents[i];
     }
     for(int i = 0; i < n; i++){
          exchange[presents[i]-1] = i+1;
     }

     for(int i = 0; i < n; i++){
         cout<<exchange[i]<<" ";
     }


    return 0;
}