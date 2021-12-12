#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int min_index = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[min_index])
      {
        min_index = j;
      }
    }
    if(min_index!=i){
      swap(arr[i], arr[min_index]); 
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
  int array[] = {3, 2, 5, 9, 13, 6, 7};
  int size = sizeof(array) / sizeof(array[0]);
  selectionSort(array, size);
  printArray(array, size);
}
