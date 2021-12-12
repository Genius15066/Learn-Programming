#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../Utilities/input.txt", "r", stdin);
    freopen("../Utilities/output.txt", "w", stdout);
#endif

    int test;
    cin >> test;

    while (test--)
    {
        int col;
        cin >> col;

        string arr1,arr2;
        cin>>arr1;
        cin>>arr2;

       int result=0;
       for(int i=1; i<(col-1); i++){
          
         if(arr1[i]=='1' && arr2[i]=='1'){
             result=1;
             break;
         }
       
       }
       result==1?cout<<"NO"<<endl:cout<<"YES"<<endl;

    }
}