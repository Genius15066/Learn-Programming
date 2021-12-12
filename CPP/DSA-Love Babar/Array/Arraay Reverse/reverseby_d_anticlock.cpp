#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

void reverse(vector<int>&v,int low,int high){
    while(low<high){
        swap(v[low],v[high]);
        low++;
        high--;
    }
}
void reverseClockwise(vector<int>&v,int size,int d){
    reverse(v,0,d-1);
    reverse(v,d,size-1);
    reverse(v,0,size-1);
}

void print(vector<int>&v){
    for(int i:v){
       cout<<i<<" ";
    }
    cout<<endl;
}
};

int main(){
    vector<int>v;
    int size;
    cin>>size;

    for(int i=0;i<size;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int d;
    cout<<"rotate element by: ";
    cin>>d;
    
    Solution ob;
    ob.reverseClockwise(v,size,d);
    ob.print(v);
}