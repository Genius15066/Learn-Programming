#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(int arr1[], int arr2[], int n, int m)
    {
        for (int i = m - 1; i >= 0; i--)
        {
            int j, last = arr1[n - 1];
            for (j = n - 2; j >= 0 && arr1[j] > arr2[i]; j--)
                arr1[j + 1] = arr1[j];

            if (j != n - 2 || last > arr2[i])
            {
                arr1[j + 1] = arr2[i];
                arr2[i] = last;
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