/*

Date: 3rd August 2021
Problem Name: Egg Dropping Problem
Solution type: Dynamic Programming 
Time Complexity: O(egg*floor^2)
Space Complexity:O(egg*floor)

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

class Solution
{
public:
    int egg_dropping(int e,int f)
    {
        int dp[e+1][f+1];
        for(int i=0;i<=f;i++){
           dp[0][i]=0;
           dp[1][i]=i;
        }
        if(e>1){
            for(int i=2;i<=e;i++){
                dp[i][0]=0;
                dp[i][1]=1;
            }
        }

         for(int i=2;i<=e;i++){
            for(int j=2;j<=f;j++){
                int minimum=INT_MAX;
                for(int x=j-1,y=0;x>=0;x--,y++){
                    int val1=dp[i-1][x];
                    int val2=dp[i][y];
                    int maxi=max(val1,val2);
                    minimum=min(minimum,maxi);
                }
                dp[i][j]=1+minimum;
            }
        }

        return dp[e][f];
    }
};

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../../../Utilities/input.txt", "r", stdin);
    freopen("../../../Utilities/output.txt", "w", stdout);
#endif

    ll test;
    cin >> test;
    while (test--)
    {
        int eggs,floor;
        cin>>eggs>>floor;
        Solution ob;
        cout << ob.egg_dropping(eggs,floor) << endl;
    }
    return 0;
}
