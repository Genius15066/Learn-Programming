/*

Date: 31th July 2021
Problem Name: Find Longest Repeated Subsequence
Solution type: Dynamic Programming spaced optimization
Time Complexity: O(n*m)
Space Complexity:O(n)

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

class Solution{
    public:
    int lrs(string s){
        int x=s.length();

        int arr[2][x+1];
        bool bi;

        for(int i=0;i<=x;i++){
            bi=i&1;
            for(int j=0;j<=x;j++){
                if(i==0 || j==0){
                    arr[bi][j]=0;
                }

                else{
                    if(s[i-1]==s[j-1] && i!=j){
                        arr[bi][j]=1+arr[1-bi][j-1];
                    }
                    else{
                        arr[bi][j]=max(arr[bi][j-1],arr[1-bi][j]);
                    }
                }
            }
        }

        return arr[bi][x];
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
        string s;
        cin>>s;

        Solution ob;
        cout<<ob.lrs(s)<<endl;
    }
    return 0;
}
