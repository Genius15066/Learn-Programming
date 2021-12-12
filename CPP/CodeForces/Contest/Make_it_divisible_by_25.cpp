#include <bits/stdc++.h>
using namespace std;

int divide(string s,string a){
  int r=0;
  int length=s.length();

  while(s.length()>0 && a.length()>0){
      if(s.back()==a.back()){
        a.pop_back();
      }
      else{
          r++;
      }
      s.pop_back();
  }

  if(a.length()==0){
      return r;
  }
  else{
    return length;
  }
  
}

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
    
       string s;
       cin>>s;

       if(s.length()<2){
           cout<<s.length()<<endl;
       }
       else{
         
         cout << min({divide(s,"00"),divide(s,"25"),divide(s,"50"),divide(s,"75")}) <<endl;;
        
       }

       
       
    }

    return 0;
}