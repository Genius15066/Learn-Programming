/*
Date: 01 October 2021
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

    int w;
    cin >> w;
    (w > 2 && w % 2 == 0) ? cout << "YES" : cout << "NO";
    return 0;
}