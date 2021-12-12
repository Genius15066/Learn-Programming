#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(int X[], int Y[], int m, int n)
    {
        for (int i = 0; i < m; i++)
        {
            if (X[i] > Y[0])
            {
                swap(X[i], Y[0]);
                int first = Y[0];

                int k;
                for (k = 1; k < n && Y[k] < first; k++)
                {
                    Y[k - 1] = Y[k];
                }

                Y[k - 1] = first;
            }
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, i;
        cin >> n >> m;

        int arr1[n], arr2[m];

        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }

        Solution ob;
        ob.merge(arr1, arr2, n, m);

        for (int i = 0; i < n; i++)
        {
            cout << arr1[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < m; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << endl;
    }
}