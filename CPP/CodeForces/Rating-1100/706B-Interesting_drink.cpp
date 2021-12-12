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
    cin>>test;
    
    int price[test];
    for(int i = 0; i < test;i++){
        cin>>price[i];
    }
    sort(price,price+test);
    
    int day;
    cin>>day;

    while(day--){
        int cost;
        cin>>cost;

        int result=upper_bound(price,price+test,cost)-price;
        cout<<result<<endl;
     
    }

    return 0;
}