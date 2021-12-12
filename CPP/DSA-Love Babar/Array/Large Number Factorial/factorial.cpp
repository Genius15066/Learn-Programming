#include <bits/stdc++.h>
#define M 1000
using namespace std;


class Solution {
public:
   
   int multiply(int res[],int size,int n){
       int carry=0;
       for(int i=0;i<size;i++){
           int product=res[i]*n+carry;
           res[i]=product%10;
           carry=product/10;
       }
       while(carry){
           res[size]=carry%10;
           carry=carry/10;
           size++;
       }
       return size;
   }
    
    vector<int> factorial(int N){
        vector<int>v;
       int result[M];
       int size=1;
       result[0]=1;

       for(int i=2;i<=N;i++){
           size=multiply(result,size,i);
       }
       for(int i=size-1;i>=0;i--){
           v.push_back(result[i]);
       }
       return v;
        
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
} 