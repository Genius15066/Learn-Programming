#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

bool subsetSum(int nums[],int sum,int n)
{
    int res=0;
    int arr[n][sum+1];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;i++){
        res+=nums[i];
        for(int j=0;j<=sum;j++){
            if(j==0){
                arr[i][j]=1;
            }
            else if(i>0 && j<nums[i]){
                arr[i][j]=arr[i-1][j];
            }
            else{
                if(nums[i]==j){
                    arr[i][j]=1;
                }
                else if(arr[i-1][j]==1){
                    arr[i][j]=1;
                }
                else if(arr[i][j-nums[i]]==1 && j<=res){
                    arr[i][j]=1;
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<=sum;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   return arr[n-1][sum];
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
