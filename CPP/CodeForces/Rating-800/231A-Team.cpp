/*
Date: 02 October 2021
Problem type: Math
Solution type: Brute Force
Time Complexity: O(1)
Space Complexity:O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../Utilities/input.txt", "r", stdin);
    freopen("../Utilities/output.txt", "w", stdout);
#endif

    int test,count = 0;
    cin>>test;

    while(test--){
        int x,y,z,s;
        cin>>x>>y>>z;
        
        s=x+y+z;

        s>1?count++:count;
    }
    cout<<count<<endl;
    return 0;
}