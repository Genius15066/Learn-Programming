#include<bits/stdc++.h>
using namespace std;

void sort012(int arr[],int size){
    int low=0;
    int mid=0;
    int high=size-1;

    while(mid<=high){
        switch(arr[mid]){
            case 0:
              swap(arr[low++],arr[mid++]);
              break;
            case 1:
               mid++;
               break;
            case 2:
                swap(arr[mid],arr[high--]);   
                break;  
        }
    }
}

int main(){
    int size;
    cout<<"Size of Array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    sort012(arr,size);
    for(int i:arr){
        cout<<i<<" ";
    }
}