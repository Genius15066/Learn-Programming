/*

Date: 2nd August 2021
Problem Name: Matrix Chain Multiplication
Solution type: Dynamic Programming 
Time Complexity: O(n^3)
Space Complexity:O(n*n)

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

class Solution
{
public:
    int matrix_chain(vector<int> &data)
    {
        int minimum,q;
        int n=data.size();
        int cost[n][n],trace[n][n];

        memset(cost,0,sizeof(cost));
        memset(trace,0,sizeof(trace));
        
        for(int d=1;d<n-1;d++){
            for(int i=1;i<n-d;i++){
                int j=i+d;
                 minimum=INT_MAX;
                for(int k=i;k<=j-1;k++){
                     q=cost[i][k]+cost[k+1][j]+data[i-1]*data[j]*data[k];
                     if(q<minimum){
                         trace[i][j]=k;
                         minimum=q;
                     }
                     cost[i][j]=minimum;
                }
            }

        }

        for(int i=0; i< n; i++){
            for(int j=0; j<n;j++){
                cout<<cost[i][j]<<" ";
            }
            cout<<endl;
        }
        
        return cost[1][n-1];
    }
};

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../../Utilities/input.txt", "r", stdin);
    freopen("../../Utilities/output.txt", "w", stdout);
#endif

    ll test;
    cin >> test;
    while (test--)
    {
        int n;
        cin>>n;

        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        Solution ob;
        cout << ob.matrix_chain(v) << endl;
    }
    return 0;
}
