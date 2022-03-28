/*
    Problem Name: Move all negative numbers to beginning and positive to end with constant extra space
    Solving Date: 28-03-2022
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void neg_pos(int arr[],int n)
    {
       int pos=0;
       for(int i=0;i<n;i++){
           if(arr[i]<0){
               if(i!=pos){
                     swap(arr[i],arr[pos]);
               }
               pos++;
           }
       }
    }

    void printArray(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
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
   
   int n;
   cin>>n;

   int a[n];

   for(int i=0;i<n;i++){
         cin>>a[i];
   } 

   Solution ob;
   ob.neg_pos(a,n);
   ob.printArray(a,n);
   return 0;
}