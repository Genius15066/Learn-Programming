#include<bits/stdc++.h>
using namespace std;

int max_sum_subarray(int arr[],int size){
    int best = -INT_MAX;
    for(int i=0;i<size;i++){
        int sum=0;
        for(int a=i;a<size;a++){
            sum=sum+arr[a];
            best=max(best,sum);
        }
        
    }
    return best;
}

int main(){

    cout<<"Enter the size of an array: ";
    int size;
    cin>>size;
     
    int arr[size];
    for(int i=0; i<size;i++){
        cin>>arr[i];
    }

    int max_sum=max_sum_subarray(arr,size);
    cout<<max_sum<<endl;
}