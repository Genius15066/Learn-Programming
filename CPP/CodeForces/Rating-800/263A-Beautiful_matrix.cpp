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
    int arr[5][5];

   for(int i=0;i<5;i++){
       for(int j=0;j<5;j++){
           cin>>arr[i][j];
       }
   }
  
    for(int i=0;i<5;i++){
       for(int j=0;j<5;j++){
           if(arr[i][j]==1){
             cout<<abs(2-i)+abs(2-j)<<endl;
             break; 
           }
       }
   }

    return 0;
}