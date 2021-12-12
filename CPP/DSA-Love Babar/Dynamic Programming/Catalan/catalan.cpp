#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int  catalan(int n)
{
    vector<ll>v(n+1);
    v[0]=v[1]=1;
    for(int i=2;i<=n;i++){  
       for(int j=0;j<i;j++){ 
           v[i]+=v[j]*v[i-1-j];
       }
    }
    int ans=v[n];
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
        int n;
        cin>>n;
       
        cout<<catalan(n)<<endl;
    }
    return 0;
}
