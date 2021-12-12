#include <bits/stdc++.h>
using namespace std;
#define ll long long

int sub_sets(int arr[], int size, int val){
int count = 0;
if (val == 1){
   count = pow(2, size) − 1;
      return count;
   }
   for (int i = 0; i < size; i++){
      if (arr[i] % val == 0){
         count++;
      }
   }
   count = pow(2, count) − 1;
   return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


  int arr[] = { 4, 6, 1, 3, 8, 10, 12 }, val = 4;
   int size = sizeof(arr) / sizeof(arr[0]);
   cout<<"Count of sub−sets that satisfy the given condition are: "<<sub_sets(arr, size, val);
   return 0;
    return 0;
}