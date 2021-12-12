#include <bits/stdc++.h>
using namespace std;

void negativeAside(int arr[], int size)
{
    int low = 0;
    int high = 0;

    while (high < size)
    {
        if (arr[high] < 0)
        {
            swap(arr[low++], arr[high++]);
        }
        else
        {
            high++;
        }
    }
}

int main()
{
    int size;
    cout << "Size of Array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    negativeAside(arr, size);
    for (int i : arr)
    {
        cout << i << " ";
    }
}