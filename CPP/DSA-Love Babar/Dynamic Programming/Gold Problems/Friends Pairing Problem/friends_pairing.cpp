/*

Date: 3rd August 2021
Problem Name: Friends Pairing Problem
Solution type: Dynamic Programming 
Time Complexity: O(n)
Space Complexity:O(1)

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int countFriendsPairings(int n)
{
   ll a=1,b=2,c=0;

   if(n<=2){
       return n;
   }

   for(int i=3;i<=n;i++){
       c=(b+(i-1)*a)%mod;
       a=b%mod;
       b=c%mod;
   }
   return c;

}

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
        int n;
        cin >> n;
        cout << countFriendsPairings(n) << endl;
    }
}
