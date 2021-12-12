#include<bits/stdc++.h>
using namespace std;


void merge(int arr[], int l, int mid, int r)
{
  int n1=mid-l+1;
  int n2=r-mid;

  int a[n1];
  int b[n2];

  for(int i=0; i<n1; i++){
      a[i]=arr[l+i];
  }
   for(int i=0; i<n2; i++){
      b[i]=arr[mid+i+1];
  }

  int i=0,j=0,k=l;
  while(i<n1 && j<n2){
      if(a[i]<b[j]){
          arr[k]=a[i];
          i++;
      }
      else{
          arr[k]=b[j];
          j++;
      }
      k++;
  }
  while(i<n1){
       arr[k]=a[i];
          i++;
          k++;
  }
   while(j<n2){
       arr[k]=b[j];
          j++;
          k++;
  }
}
 
void mergeSort(int arr[], int l,int r)
{
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);  
    }
}
 

// Function to print an array
void printArray(int A[], int size)
{
    for (auto i = 0; i < size; i++)
        cout << A[i] << " ";
}
 

// Driver code
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int size = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Given array is "<<endl;
    printArray(arr, size);
 
    mergeSort(arr, 0, size - 1);
 
    cout << "\nSorted array is "<<endl;;
    printArray(arr, size);
    return 0;
}
 