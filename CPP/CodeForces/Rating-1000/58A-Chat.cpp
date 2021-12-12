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
    string test;
    cin>>test;
     
     char c='h';
     int count=0;
     string s="hello";

      for(int i=0;i<test.size();i++){
          if(test[i]==s[count]){
              c='e';
              count++;
          }
      }
      count==5?cout<<"YES"<<endl:cout<<"NO"<<endl;

    return 0;
}