#include <bits/stdc++.h>
using namespace std;
#define ll long long

int smallest_alphabet(string &a, int n)
{
    char mini = 'z';
    int posi;
    for (int i=0; i<n; i++) {
        if(a[i] < mini){
            mini=a[i];
            posi = i;
        }
    } 
    return posi;
}

void eraseDemo(string str,int pos)
{
    str.erase(pos,pos+1);
    cout << str;
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
 
    int n;
    cin>>n;

    while(n--){
       string s;
       cin>>s;
       int size = s.size();
       int pos=smallest_alphabet(s,size);

       char z=s[pos];

       s.erase(s.begin()+pos);
       
       cout<<z<<" "<<s<<endl;

    }


    return 0;
}