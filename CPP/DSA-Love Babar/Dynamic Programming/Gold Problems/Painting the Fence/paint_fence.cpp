/*

Date: 3rd August 2021
Problem Name: Painting the fence
Solution type: Dynamic Programming 
Time Complexity: O(n)
Space Complexity:O(1)

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

class Solution
{
public:
     long long countWays(int n, int k){
         if(n==0){
             return 0;
         }
         if(n==1){
             return k;
         }
        long long same=k*1;
        long long diff=k*(k-1);
        long long total=(same+diff)%mod;

        for(int i=3;i<=n;i++){
            same=diff*1;
            diff=total*(k-1);
            total=(same+diff)%mod;
        }
        return total;
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
        int fence,color;
        cin>>fence>>color;
        Solution ob;
        cout << ob.countWays(fence,color) << endl;
    }
    return 0;
}
