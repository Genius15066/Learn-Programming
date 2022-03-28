/*
    Problem Name:Union of two arrays and count the single occurence of elements
    Solving Date: 28-03-2022
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int uniqueElements(vector<int> &a, vector<int> &b)
    {
        int size_a = a.size();
        int size_b = b.size();
        unordered_map<int, int> map;

        for(int i=0;i<size_a;i++){
            map[a[i]]++;
        }
        for(int i=0;i<size_b;i++){
            map[b[i]]++;
        }

        return map.size();
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
    cin>>t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }

        vector<int> b;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }

        Solution ob;
        int s=ob.uniqueElements(a, b);
        cout<<"Unique Elements: "<<s<<endl;
    }
    return 0;
}