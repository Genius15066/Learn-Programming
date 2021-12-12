#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int trappingWater(int arr[], int n){
        int left[n],right[n];
        left[0]=arr[0];
        int leftmax=left[0];
        right[n-1]=arr[n-1];
        int rightmax=right[n-1];

        for(int i=1;i<n;i++){
            leftmax=max(arr[i],leftmax);
            left[i]=leftmax;
        }
        for(int i=n-2;i>=0;i--){
            rightmax=max(arr[i],rightmax);
            right[i]=rightmax;
        }
        int count=0;
        for(int i=0;i<n;i++){
            int mini=min(left[i],right[i]);
            count+=(mini-arr[i]);
        }
        return count;
        
    }
};


int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        int a[n];
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        cout<<obj.trappingWater(a, n)<<endl ;
        
    }
    
    return 0;
} 