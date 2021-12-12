#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

bool subsetSum(int nums[],int sum,int size)
{
    int arr[size+1][sum+1];
    for(int i=0;i<=size;i++){
       arr[i][0]=true;
    }
    for(int i=1;i<=sum;i++){
       arr[0][i]=false;
    }
    
      for(int i=1;i<=size;i++){
        for(int j=1;j<=sum;j++){
           if(j<nums[i-1]){
               arr[i][j]=arr[i-1][j];
           }
           if(j>=nums[i-1]){
               arr[i][j]=arr[i-1][j] || arr[i-1][j-nums[i-1]];
           }
        }
    }

    for(int i=8;i<=size;i++){
        for(int j=0;j<=sum;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   return arr[size][sum];
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

    ll test;
    cin >> test;
    while (test--)
    {
        int n,sum;
        cin >> n>>sum;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << subsetSum(arr,sum,n) << endl;
    }
    return 0;
}
