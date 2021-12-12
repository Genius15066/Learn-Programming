#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    for(int i=m-1;i>=0;){
	        if(arr1[n-1]>arr2[i]){
	            swap(arr1[n-1],arr2[i]);
                i--;
                sort(arr1,arr1+n);      
	        }
            else if(arr1[n-1]<arr2[i]){
                i--;
            }
	}
}
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,i;
        cin>>n>>m;

        int arr1[n],arr2[m];

        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<m;i++){
            cin>>arr2[i];
        }

        Solution ob;
        ob.merge(arr1,arr2,n,m);

        for(int i=0;i<n;i++){
            cout<<arr1[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<m;i++){
            cout<<arr2[i]<<" ";
        }
        cout<<endl;
    }
}