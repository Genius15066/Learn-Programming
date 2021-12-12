#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int doUnion(int a[], int n, int b[], int m)
    {
        vector<int> v;
        int i = 0, j = 0;
        while (i < n && j < m)
        {
            if (a[i] < b[j])
            {
                if (v.back() != a[i])
                {
                    v.push_back(a[i]);
                }

                i++;
            }
            else if (b[j] < a[i])
            {
                if (v.back() != b[j])
                {
                    v.push_back(b[j]);
                }
                j++;
            }
            else
            {
                v.push_back(a[i]);
                i++;
                j++;
            }
        }
        while (i < n)
        {
            if (v.back() != a[i])
                {
                    v.push_back(a[i]);
                }
            i++;
        }
        while (j < m)
        {
             if (v.back() != b[j])
                {
                    v.push_back(b[j]);
                }
            j++;
        }

        return v.size();
    }
};

int main()
{

    int test;
    cin >> test;

    while (test--)
    {

        int n, m;
        cin >> n >> m;
        int a[n], b[m];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        Solution ob;
        cout << ob.doUnion(a, n, b, m) << endl;
    }
}
