/*

Date: 31th July 2021
Problem Name: Find Longest Common Subsequence
Solution type: Dynamic Programming
Time Complexity: O(n*m)
Space Complexity:O(n*m)

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

        int arr[x+1][y+1];

        for(int i=0;i<=x;i++){
            for(int j=0;j<=y;j++){
                if(i==0 || j==0){
                    arr[i][j]=0;
                }

                else{
                    if(s1[i-1]==s2[j-1]){
                        arr[i][j]=1+arr[i-1][j-1];
                    }
                    else{
                        arr[i][j]=max(arr[i][j-1],arr[i-1][j]);
                    }
                }
            }
        }

        return arr[x][y];
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
