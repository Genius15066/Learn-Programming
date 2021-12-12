#include<bits/stdc++.h>
using namespace std;

class Solution{
   public:
     int inversion(int arr[],int n){
         int count=0;
         for(int i=0;i<n;i++){
             for(int j=i;j<n;j++){
                 if(arr[i]>arr[j]){
                     count++;
                 }
             }
         }
         return count;
     }
};

int main(){
    int size ;
    cout<<"Enter the size: ";
    cin>>size;
    
    int arr[size];
    cout<<"Enter the element of the array: "<<endl;
    for(int i=0;i<size;i++){
       cin>>arr[i];
    }
    
    Solution ob;
    int x=ob.inversion(arr,size);
    cout<<x<<endl;
}