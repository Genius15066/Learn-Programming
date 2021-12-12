/*Time complexity of this method is O(n^2)*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int minJumps(int arr[], int n){
        int min_jump[n];
        min_jump[0]=0;

        for(int i=1;i<n;i++){
            min_jump[i]=INT_MAX;
            for(int j=0;j<i;j++){
                if(i<=j+arr[j]  &&min_jump[j]!=INT_MAX){
                   min_jump[i]=min(min_jump[i],min_jump[j]+1);
                }
            }
        }
        
        for(int i:min_jump){
            cout<<i<<" ";
        }
        cout<<endl;
        return (min_jump[n-1]!=INT_MAX)?min_jump[n-1]:-1;
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}