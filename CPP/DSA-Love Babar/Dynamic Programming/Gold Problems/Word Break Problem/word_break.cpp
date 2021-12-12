/*

Date: 3rd August 2021
Problem Name: Word Break Problem
Solution type: Dynamic Programming 
Time Complexity: O()
Space Complexity:O()

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int wordBreak(string A, vector<string> &B)
{
   

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
        vector<string>dict(n);

        for(int i=0; i<n; i++){
            string s;
            cin>>s;
            dict.push_back(s);
        }
        
        string line;
        cin>>line;
        cout << wordBreak(line,dict) << endl;
    }
}
