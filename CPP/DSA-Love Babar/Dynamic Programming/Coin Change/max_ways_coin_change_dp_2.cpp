#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int maxWays(vector<int>&coins,int amount){
    int n=coins.size();

    int arr[n][amount+1];
    for(int i=0;i<n; i++){
        for(int j=0;j<=amount;j++){
            if(j==0){
                arr[i][j]=1;
            }
            else if(i==0 && j!=0 && j%coins[0]==0){
                arr[i][j]=1;
            }
            else{
                arr[i][j]=0;
            }
        }
    }
 
    for(int i=1;i<n;i++){
        for(int j=1;j<=amount;j++){
            if(coins[i]>j){
                arr[i][j]=arr[i-1][j];
            }
            else{
                arr[i][j]=arr[i-1][j]+arr[i][j-coins[i]];
            }
        }
       
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=amount;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return arr[n-1][amount];
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
