#include<bits/stdc++.h>
using namespace std;


int main(){
    int a,b,test;
    cin>>test;
    while(test--){
        int max=0;
        cin>>a>>b;
       for(int i=a;i<=b;i++){
           for(int j=i+1;j<=b;j++){
               int x=i^j;
               if(x>max){
                   max=x;
               }
           }
       }
       cout<<max<<endl;

    }
}