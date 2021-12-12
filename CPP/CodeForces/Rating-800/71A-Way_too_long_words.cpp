/*
Date: 01 October 2021
Problem type: Strings
Solution type: Brute Force
Time Complexity: O(1)
Space Complexity:O(1)
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../Utilities/input.txt", "r", stdin);
    freopen("../Utilities/output.txt", "w", stdout);
#endif

    int test;
    cin>>test;

    while(test--){
      string s;
      cin>>s;
      int z;
      z=s.size();

      z>10?cout<<s[0]<<z-2<<s[z-1]<<endl:cout<<s<<endl;
    }
    return 0;
}