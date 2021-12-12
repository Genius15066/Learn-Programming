#include<bits/stdtr1c++.h>
using namespace std;

class Pair{
    public:
      int max;
      int min;
};

Pair minmax_element(int arr[],int size){
   int min,max;
    max=min=arr[0];
   for(int i=1;i<size;i++){
       if(arr[i]>max){
           max=arr[i];
       }
       else if(arr[i]<min){
           min=arr[i];
       }
   }
   Pair result;
   result.max=max;
   result.min=min;
   return result ;
}



int main(){
    int arr[]={11,22,32,21,12,45,23,24,54,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    Pair minmax=minmax_element(arr,size);
    cout<<minmax.max<<" "<<minmax.min<<endl;
}