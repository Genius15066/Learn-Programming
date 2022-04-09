/*
    Problem Name: Cyclically rotate an array by one
    Solving Date: 29-03-2022
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void CyclicallyRotate(vector<int> &a, int n)
    {
        int temp=a[n-1];
        for(int i=n-1;i>0;i--){
            a[i]=a[i-1];
        }
        a[0]=temp;
    }
    void printArray(vector<int> &a, int n)
    {
        for (int i : a)
        {
            cout << i << " ";
        }
    }
};

void run()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../Utilities/input.txt", "r", stdin);
    freopen("../Utilities/output.txt", "w", stdout);
#endif
}

int32_t main()
{
    run();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }

        Solution ob;
        ob.CyclicallyRotate(a, n);
        ob.printArray(a, n);
    }
    return 0;
}