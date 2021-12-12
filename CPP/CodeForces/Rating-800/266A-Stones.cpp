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

    string s;
    cin>>s;

    int count = 0;

    for(int i=0; i<n-1; i++){
        if(s[i] ==s[i+1]){
            count++;
        }
    }
    
    cout<<count;

    return 0;
}