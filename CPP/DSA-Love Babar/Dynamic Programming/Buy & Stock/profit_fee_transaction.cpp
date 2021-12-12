#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

class Solution{
    public:
    int solve(int prices[],int n,int fee){
       int buy,sell; 
       buy=-prices[0];
       sell=0;

       for(int i=1;i<n;i++){
         buy=max(buy,sell-prices[i]);
         sell=max(sell,buy+prices[i]-fee);
         cout<<buy<<" "<<sell<<endl;
        }
       return sell;
    }
};


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
     freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ll test;
    cin>>test;
    while(test--)
    {
        int n,k;
        cin>>n>>k;
        int v[n];
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        Solution ob;
        cout<<ob.solve(v,n,k)<<endl;
    }
    return 0;
}
