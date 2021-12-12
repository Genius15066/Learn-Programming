#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int editDistance(string s, string t) {
      int sl=s.length(),tl=t.length();
       int arr[sl+1][tl+1];
       
       for(int i=0;i<=sl;i++){
           for(int j=0;j<=tl;j++){
               if(i==0 || j==0){
                   arr[i][j]=max(i,j);
               }
               
               else if(s[i-1]==t[j-1]){
                   arr[i][j]=arr[i-1][j-1];
               }
               else{
                   arr[i][j]=1+min(arr[i-1][j-1],min(arr[i][j-1],arr[i-1][j]));
               }
           }
       }
        for(int i=0;i<=sl;i++){
            for(int j=0;j<=tl;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }

       return arr[sl][tl];
    }
};

// { Driver Code Starts.
int main() {
       ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../../Xtra/input.txt", "r", stdin);
    freopen("../../Xtra/output.txt", "w", stdout);
#endif

    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}