/*
    Problem Name: Find kth smalllest element in an array
    Solving Date: 27-03-2022
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int kth_smallest(vector<int> &v,int f)
    {
        sort(v.begin(), v.end());
        return v[f-1];
       
    }

};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../Utilities/input.txt", "r", stdin);
    freopen("../Utilities/output.txt", "w", stdout);
#endif
    int n,f;
    vector<int> array;
    cin >> n >>f;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        array.push_back(x);
    }
    Solution ob;
    int ks=ob.kth_smallest(array,f);
    cout<<ks;
   

    return 0;
}