/*

Date: 31th July 2021
Problem Name: Find Longest increasing Subsequence
Solution type: Dynamic Programming 
Time Complexity: O(n^2)
Space Complexity:O(n)

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

class Solution{
    public:
    int lis(int n,int a[]){
        int length[n];
        int maxi=1;

        for(int i=0;i<n;i++){
            length[i]=1;
        }

        for(int i=1;i<n;i++){
            int temp=1;
            for(int j=0;j<i;j++){
                if(a[i]>a[j]){
                    temp=max(temp,length[j]+1);
                }
            }
            length[i]=temp;
            maxi=max(maxi,length[i]);
        }

         for(int i=0;i<n;i++){
           cout<<length[i]<<" ";
       } 
       cout<<endl;
       return maxi;
    }
     
};

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../../../Utilities/input.txt", "r", stdin);
    freopen("../../../Utilities/output.txt", "w", stdout);
#endif

    ll test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }  
        Solution ob;
        cout << ob.lis(n,arr) << endl;
    }
    return 0;
}
