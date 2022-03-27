/*
    Problem Name: Reverse an array
    Solving Date: 14-02-2022
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void reverseArray(vector<int> &v)
    {
        int start = 0;
        int end = v.size() - 1;

        while (start < end)
        {
            swap(v[start], v[end]);
            start++;
            end--;
        }
    }

    void printArray(vector<int> &v)
    {
        for (int i : v)
        {
            cout << i << " ";
        }
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
    int n;
    vector<int> array;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        array.push_back(x);
    }
    Solution ob;
    ob.reverseArray(array);
    ob.printArray(array);

    return 0;
}