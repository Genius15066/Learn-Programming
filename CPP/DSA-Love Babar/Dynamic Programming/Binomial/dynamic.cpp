#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int  binomial(int n,int r)
{
    if(n<r) return 0;
    if(n==r ||r ==0) return 1;
    if(r==1 || n-r==1) return n;
    
    r>n/2?r=n-r:r;
    vector<int>v(r+1,0);
    v.at(0)=1;
    for(int i=1;i<=n;i++){  
        for(int j=min(i,r);j>0;j--){
            v[j]=(v[j]+v[j-1])%mod;
        }
    }
    return v[r];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../../Xtra/input.txt", "r", stdin);
    freopen("../../Xtra/output.txt", "w", stdout);
#endif

    ll test;
    cin>>test;
    while(test--)
    {
        int n,r;
        cin>>n>>r;
       
        cout<<binomial(n,r)<<endl;
    }
    return 0;
}
