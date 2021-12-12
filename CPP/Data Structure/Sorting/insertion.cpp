#include <bits/stdc++.h>
using namespace std;


void insertionSort(int arr[], int n)
{
    int j,temp;
    for (int i = 1; i <n; i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;

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
    insertionSort(array, size);
    printArray(array, size);
}



