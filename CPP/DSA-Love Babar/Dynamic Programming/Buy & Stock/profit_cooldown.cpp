#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

class Solution{
    public:
    int solve(int prices[],int n){
       int buy,sell,cool,prevSell; 
       buy=-prices[0];sell=cool=prevSell=0;

       for(int i=1;i<n;i++){
          buy=max(buy,cool-prices[i]);
          sell=max(sell,buy+prices[i]);
          cool=max(prevSell,cool);
          prevSell=sell;

          cout<<buy<<" "<<sell<<" "<<cool<<endl;
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
        int n;
        cin>>n;
        int v[n];
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        Solution ob;
        cout<<ob.solve(v,n)<<endl;
    }
    return 0;
}
