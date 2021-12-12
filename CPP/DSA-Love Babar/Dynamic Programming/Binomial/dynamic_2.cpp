#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int power(int a,int n){
    int res=1;
    while(n){
        if( n%2){
            res=(res*1ll*a)%mod;
        }
        n/=2;
        a=(a*1ll*a)%mod;
    }
    return res;
}

int  binomial(int n,int r)
{
   
    vector<ll>v(n+1);
    v.at(0)=1;
    v[0]=v[1]=1;
    for(int i=2;i<=n;i++){  
       v[i]=(v[i-1]*1ll*i)%mod;
    }

    for(int i:v){ 
        cout<<i <<" ";
    }
    cout<<endl;
    ll ans=v[n];
    ans=(ans * power(v[r],mod-2))%mod;
    cout<<ans<<endl;
    ans=(ans * power(v[n-r],mod-2))%mod;

    return ans;
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
