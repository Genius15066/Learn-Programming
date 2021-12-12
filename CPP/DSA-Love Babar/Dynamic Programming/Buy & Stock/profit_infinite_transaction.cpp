#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

class Solution{
    public:
    int solve(int prices[],int n){
       int profit=0;
       int buy,sell; 
       buy=sell=0;

       for(int i=1;i<n;i++){
           if(prices[i]<prices[i-1]){
             profit+=prices[sell]-prices[buy];
             buy=sell=i;
            } 
            else{
                sell++;
            }
       }
        profit+=prices[sell]-prices[buy];

       return profit;
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
