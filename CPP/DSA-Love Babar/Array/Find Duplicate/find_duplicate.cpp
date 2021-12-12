#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int duplicate;
       sort(nums.begin(), nums.end());
       for(int i = 0; i < nums.size()-1;i++){
           if(nums[i]==nums[i+1]){
               duplicate=nums[i];
               break;
           }
       }
       return duplicate;
    }
};

int main(){
    vector<int>v;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }

    Solution ob;
    int x=ob.findDuplicate(v);
    cout<<x<<endl;
}