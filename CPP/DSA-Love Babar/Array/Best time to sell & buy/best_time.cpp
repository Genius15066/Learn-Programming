#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int solve(vector<int>&arr,int size){
    int mini=arr[0],profit=0;
    for(int i=1;i<size;i++){
        mini=min(arr[i],mini);
        if(arr[i]!=mini){
            profit=max(profit,arr[i]-mini);
        }
         
    }
    return profit;
}

int main(){
    vector<int>arr{7,6,4,3,2,1};
    int size=arr.size();
    int x=solve(arr,size);
    cout<<x;

}