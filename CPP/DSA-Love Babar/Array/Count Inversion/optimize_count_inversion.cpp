#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long int merge(long long arr[], int l, int mid, int r)
    {
        long long count=0;
        int n1 = mid - l + 1;
        int n2 = r - mid;

        int a[n1];
        int b[n2];

        for (int i = 0; i < n1; i++)
        {
            a[i] = arr[l + i];
        }
        for (int i = 0; i < n2; i++)
        {
            b[i] = arr[mid + i + 1];
        }

        int i = 0, j = 0, k = l;
        while (i < n1 && j < n2)
        {
            if (a[i] <= b[j])
            {
                arr[k] = a[i];
                i++;
            }
            else
            {
                arr[k] = b[j];
                count+=n1-i;
                j++;
            }
            k++;
        }
        while (i < n1)
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        while (j < n2)
        {
            arr[k] = b[j];
            j++;
            k++;
        }
        return count;
    }
    long long int mergeSort(long long arr[], long long int l, long long int r)
    {
        int count = 0;
        if (l < r)
        {
            int mid = (l + r) / 2;
            count += mergeSort(arr, l, mid);
            count += mergeSort(arr, mid + 1, r);
            count += merge(arr, l, mid, r);
        }
        return count;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        long x= mergeSort(arr, 0, N - 1);
        return x;
    }
};

int main()
{

    long long T;
    cin >> T;

    while (T--)
    {
        long long N;
        cin >> N;

        long long A[N];
        for (long long i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A, N) << endl;
    }

    return 0;
}