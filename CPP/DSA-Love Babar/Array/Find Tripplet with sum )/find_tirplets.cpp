#include<bits/stdc++.h>
using namespace std;
 
int findTriplets(int arr[], int n)
{
    bool found = false;
 
    sort(arr, arr+n);
 
    for (int i=0; i<n-1; i++)
    {
        int l = i + 1;
        int r = n - 1;
        int x = arr[i];
        while (l < r)
        {
            if (x + arr[l] + arr[r] == 0)
            {
                l++;
                r--;
                found = true;
                  break;
            }
 
            else if (x + arr[l] + arr[r] < 0)
                l++;
 
            else
                r--;
        }
    }
  return found;
}
 
// Driven source
int main()
{
    int arr[] = {0, -1, 2, -3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    findTriplets(arr, n);
    return 0;
}