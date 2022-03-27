/*
    Problem Name: Sort an array of 0s, 1s and 2s
    Solving Date: 27-03-2022
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sort012(int arr[],int n)
    {
       int l=0,m=0,h=n-1;
       while(m<=h){
           if(arr[m]==0){
               swap(arr[l],arr[m]);
               l++;
               m++;
           }
           else if(arr[m]==1){
               m++;
           }
           else{
                swap(arr[m],arr[h]);
                h--;
           }
       }
       
    }

};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../Utilities/input.txt", "r", stdin);
    freopen("../Utilities/output.txt", "w", stdout);
#endif
   
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
           cin>>a[i];
       }

       Solution ob;
       ob.sort012(a,n);

       for(int i=0;i<n;i++){
              cout<<a[i]<<" ";
         }
            cout<<endl;  
   }
   return 0;
}