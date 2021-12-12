#include <bits/stdc++.h>
using namespace std;

void linearSearch(int arr[], int size, int find_data)
{
    int flag=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == find_data)
        {
            cout << "Index of the found element is: " << i << endl;
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        cout << "Element not found" << endl;
    }
}

int main()
{
    int array[] = {3, 5, 7, 4, 1, 9};
    int size = sizeof(array) / sizeof(array[0]);
    linearSearch(array, size, 4);
    linearSearch(array, size, 1);
   
}


