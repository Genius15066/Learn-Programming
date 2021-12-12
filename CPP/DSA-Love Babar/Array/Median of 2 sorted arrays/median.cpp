#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    double findMedianSortedArrays(vector<int> &arr1, vector<int> &arr2)
    {
        int n = arr1.size();
        int m = arr2.size();

        int begin = 0;
        int end = n;

        while (begin <= end)
        {
            int i1 = (begin + end) / 2;
            int i2 = (n + m + 1) / 2 - i1;

            int min1 = (i1 == n) ? INT_MAX : arr1[i1];
            int max1 = (i1 == 0) ? INT_MIN : arr1[i1 - 1];

            int min2 = (i2 == m) ? INT_MAX : arr2[i2];
            int max2 = (i2 == 0) ? INT_MIN : arr2[i2 - 1];

            if ((max1 <= min2) && (max2 <= min1))
            {
                if ((n + m) % 2 == 0)
                {
                    return ((double)(max(max1, max2) + min(min1, min2)) / 2);
                }

                else
                {
                    return ((double) (max(max1,max2) ));
                }
            }
        

           else if (max1 > min2)
           {
            end = i1 - 1;
           }

          else
          {
            begin = i1 + 1;
          }
        }
        return 0;
    }
};


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> n >> m;

        vector<int> arr1(m);
        for (int i = 0; i < m; ++i)
            cin >> arr1[i];

        vector<int> arr2(n);
        for (int i = 0; i < n; ++i)
            cin >> arr2[i];

        Solution ob;
        double x = ob.findMedianSortedArrays(arr1, arr2);
        cout << x;
    }
}
