/*

Date: 31th July 2021
Problem Name: Find Longest Common Subsequence
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
    int lcs(string s1,string s2){
        int x=s1.length();
        int y=s2.length();

        int arr[2][y+1];
        bool bi;

        for(int i=0;i<=x;i++){
            bi=i&1;
            for(int j=0;j<=y;j++){
                if(i==0 || j==0){
                    arr[bi][j]=0;
                }

                else{
                    if(s1[i-1]==s2[j-1]){
                        arr[bi][j]=1+arr[1-bi][j-1];
                    }
                    else{
                        arr[bi][j]=max(arr[bi][j-1],arr[1-bi][j]);
                    }
                }
            }
        }

        return arr[bi][y];
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
        string s1,s2;
        cin>>s1>>s2;

        Solution ob;
        cout<<ob.lcs(s1,s2)<<endl;
    }
    return 0;
}
