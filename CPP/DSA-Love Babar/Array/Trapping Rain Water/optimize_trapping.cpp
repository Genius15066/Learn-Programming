#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int trappingWater(vector<int>&nums){
        int n=nums.size();
        if(n<3) return 0;

        int leftmax=nums[0],rightmax=nums[n-1];
        int left=1,right=n-2,count=0;

        while(left<=right){
           if(leftmax<rightmax) 
           {
               if(nums[left]>=leftmax){
                    leftmax=nums[left];
               } 
               else{
                   count+=leftmax-nums[left];
               }
               left++;
           }

           else{
                if(nums[right]>rightmax){
                    rightmax=nums[right];
               } 
               else{
                   count+=rightmax-nums[right];
               }
               right--;
           }
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
        
        vector<int>a(n);
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        cout<<obj.trappingWater(a)<<endl ;
        
    }
    
    return 0;
} 