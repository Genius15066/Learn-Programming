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
   
   int n;
   cin>>n;
   int result=0;

   while(n--){
       string s;
       cin>>s;

       if(s[0]=='+' || s[2]=='+'){
          result++;
       }
       else{
           result--;
       }
   }
  cout<<result<<endl;
    return 0;
}