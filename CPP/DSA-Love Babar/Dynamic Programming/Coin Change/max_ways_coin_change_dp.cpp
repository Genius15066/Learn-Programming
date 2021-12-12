#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int maxWays(vector<int>&coins,int amount){
    int n=coins.size();

    int arr[amount+1];
    memset(arr,0,sizeof(arr));
    arr[0]=1;

    for(int i=0;i<n;i++){
        for(int j=coins[i];j<=amount;j++){
            arr[j]+=arr[j-coins[i]];
        }
       
    }
    for(int i=0;i<=amount;i++){
        cout<<arr[i]<<" ";
    }

    return arr[amount];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("../../Xtra/input.txt", "r", stdin);
    freopen("../../Xtra/output.txt", "w", stdout);
#endif
    int n,amount;
    cin>>n>>amount;
    vector<int>coins(n);
    for(int i=0;i<n; i++){
        cin>>coins[i];
    }

    cout<<maxWays(coins,amount);
    return 0;
}
