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
      int n,k;
      cin>>n>>k;

      int mice[k];

      for(int i=0;i<k;i++){
          cin>>mice[i];
      }

      sort(mice,mice+k);

       for(int i=0;i<k;i++){
          cout<<mice[i]<<" ";
      }
      int count=0;

      for(int i=k-1;i>0;i--){
        
      }
       cout<<count<<endl;
    }
   

    return 0;
}