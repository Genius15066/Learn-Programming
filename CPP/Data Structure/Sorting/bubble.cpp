#include <bits/stdc++.h>
using namespace std;

/*
for swapping c++ has built in function swap()..

void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a = *b;
    *b = temp;
}
*/


//code for bubble sorting.. It is an optimized code for bubble sorting
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < (n - 1); i++)
    {
        int flag = 0; //optimiztion happen
        for (int j = 0; j < (n - i - 1); j++) // optimization happen
        {
            if (arr[j] > arr[j + 1])
            {   
             swap(arr[j], arr[j + 1]); //built in swap() function
             flag=1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}

// print the array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


//driver code
int main()
{
    int array[] = {3, 2, 5, 9, 13, 6,7};
    int size = sizeof(array) / sizeof(array[0]);
    bubbleSort(array, size);
    printArray(array, size);
}



