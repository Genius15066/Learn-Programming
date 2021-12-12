#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int doUnion(int a[],int n, int b[],int m){
     set<int>s;
     for(int i=0;i<n;i++){
         int num=a[i];
        s.insert(num);
     }
     for(int i=0;i<m;i++){
         int num=b[i];
        s.insert(num);
     }
     return s.size();
    }
};


int main(){

    int test;
    cin>>test;

    while(test--){

        int n,m;
        cin>>n>>m;
        int a[n],b[m];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
         for(int i=0;i<m;i++){
            cin>>b[i];
        }

        Solution ob;
        cout<<ob.doUnion(a,n,b,m)<<endl;
    }
}
