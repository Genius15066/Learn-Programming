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
    string s;
    cin >> s;

    int count0=0,count1=0,flag=0;

    for(int i=0; i<s.length();i++){
        if(s[i]=='0'){
            count0++;
            count1=0;
        }
        else{
            count1++;
            count0=0;
        }

        if(count0==7 || count1==7){
          flag=1;
          break;
        }
    }

    flag==1?cout<<"YES"<<endl:cout<<"NO"<<endl;

    return 0;
}