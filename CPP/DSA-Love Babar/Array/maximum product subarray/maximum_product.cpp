#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

	long long maxProduct(int *arr, int n) {
	 long long currentMax=arr[0],currentMin=arr[0];
     long long ans =arr[0];

     for(int i=1;i<n;i++){
         if(arr[i]<0){
             swap(currentMin,currentMax);
         }
         currentMax=max((long long)arr[i],currentMax * arr[i]);
         currentMin=min((long long)arr[i],currentMin * arr[i]);
         ans=max(ans,currentMax);
     }
     return ans;
	}
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
} 