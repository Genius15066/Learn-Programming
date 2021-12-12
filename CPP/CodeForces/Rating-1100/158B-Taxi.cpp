/*
Date: 10 October 2021
Problem type: Math
Solution type: Brute Force
Time Complexity: O(1)
Space Complexity:O(1)
*/

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
    int count1,count2,count3,count4;
    count1 = count2 = count3 = count4 =0;

    while(test--){
        int passanger;
        cin>>passanger;

        if(passanger==1){
            count1++;
        }
        else if(passanger==2){
            count2++;
        }
        else if(passanger==3){
            count3++;
        }
        else{
            count4++;
        }
    }

    int sum=count4+count3;
    count1-count3>0?count1=count1-count3:count1=0;
    int total;
    total=count2*2+count1;
    total%4!=0?sum+=(total/4+1):sum+=(total/4);
    cout<<sum;

    return 0;
}