#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int maxWays(vector<int>&coins,int n,int amount){
  
    long long int arr[amount+1];
    arr[0]=0;
    for(int i=1;i<amount+1;i++){
        arr[i]=INT_MAX;
    }
    
    for(int i=0;i<n;i++){
        for(int j=coins[i];j<=amount;j++){  
              arr[j]=min(arr[j],arr[j-coins[i]]+1);        
        }
       
    }
    for(int i=0;i<=amount;i++){
        cout<<arr[i]<<" ";
    }
     cout<<endl;
     if(arr[amount]==INT_MAX ){
         return -1;
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

    cout<<maxWays(coins,n,amount);
    return 0;
}
