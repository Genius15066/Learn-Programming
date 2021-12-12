#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int find_data)
{
    int left = 0, right = size - 1, mid;

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == find_data)
        {
            return mid;
        }
        else if (find_data < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int array[] = {3, 5, 7, 4, 1, 9};
    int size = sizeof(array) / sizeof(array[0]);
    sort(array, array + size);
    int index1 = binarySearch(array, size, 13);
    (index1 == -1) ? cout << "Element is not present" << endl : cout << "Index of the found element is: " << index1 << endl;
}