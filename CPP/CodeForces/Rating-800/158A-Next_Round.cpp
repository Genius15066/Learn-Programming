#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../Utilities/input.txt", "r", stdin);
    freopen("../Utilities/output.txt", "w", stdout);
#endif
   int n,k;
   cin>>n>>k;

   int arr[n];
   for (int i=0; i<n; i++){
       cin>>arr[i];
   }

   int x=arr[k-1];

   int count=0;

   for (int i=0; i<n; i++){
       if(arr[i]>=x && arr[i]!=0){
           count++;
       }
   }
    cout<<count<<endl;
    return 0;
}