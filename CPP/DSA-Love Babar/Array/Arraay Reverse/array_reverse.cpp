#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr,int size){
    int start=0,end=size-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

}

void printArray(vector<int> &arr, int size){
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>arr={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
    reverseArray(arr,arr.size());
    printArray(arr,arr.size());

}