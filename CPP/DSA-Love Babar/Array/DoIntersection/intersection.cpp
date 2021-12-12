#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void doIntersection(int arr1[], int m, int arr2[2], int n)
    {
        sort(arr1,arr1+m);
        sort(arr2,arr2+n);
        int i = 0, j = 0;
        vector<int> v;
        while (i < m && j < n)
        {
            if (arr1[i] == arr2[j])
            {
                v.push_back(arr1[i]);
                i++;
                j++;
            }
            else if (arr1[i] < arr2[j])
            {
               i++;
            }
             else if (arr2[j] < arr1[i])
            {
               j++;
            }
        }
        for(int i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
};
    int main()
    {
        int test;
        cin >> test;
        while (test--)
        {
            int m, n;
            cin >> m >> n;
            int arr1[m], arr2[n];

            for (int i = 0; i < m; i++)
            {
                cin >> arr1[i];
            }
            for (int i = 0; i < n; i++)
            {
                cin >> arr2[i];
            }

            Solution ob;
            ob.doIntersection(arr1, m, arr2, n);
        }
    }