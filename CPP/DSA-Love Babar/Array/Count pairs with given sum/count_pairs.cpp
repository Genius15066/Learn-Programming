#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        int count=0;
        map<int,int>m;
        for(int i=0;i<n;i++) m[arr[i]]++;

        for(int i=0;i< n; i++) {
            if(2*arr[i]==k){
                count+=max(m[arr[i]]-1,0);
            }
            else{
                count+=m[k-arr[i]];
            }
        }
        return count/2;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}