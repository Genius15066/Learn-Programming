/*

Date: 31th July 2021
Problem Name: Find Longest common Subsequences of three strings
Solution type: Dynamic Programming 
Time Complexity: O(n1*n2*n3)
Space Complexity:O(n1*n2*n3)

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

class Solution
{
    public:
    int lcs3(string s1, string s2,string s3)
    {
        int x=s1.length();
        int y=s2.length();
        int z=s3.length();

       int arr[x+1][y+1][z+1];

        for(int i=0;i<=x;i++){
            for(int j=0;j<=y;j++){
               for(int k=0;k<=z;k++){
                    if(i==0|| j==0 ||k==0){
                    arr[i][j][k]=0;
                }
                else{
                    if(s1[i-1]==s2[j-1] && s2[j-1]==s3[k-1]){
                        arr[i][j][k]=1+arr[i-1][j-1][k-1];
                    }
                    else{
                        arr[i][j][k]=max(arr[i-1][j][k],max(arr[i][j-1][k],arr[i][j][k-1]));
                    }
                }
               }
            }
        }
      
        return arr[x][y][z]; 
    }
};


int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../../../Utilities/input.txt", "r", stdin);
    freopen("../../../Utilities/output.txt", "w", stdout);
#endif
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2,s3;
        cin>>s1>>s2>>s3;        
        Solution ob;
        cout << ob.lcs3(s1, s2,s3) << endl;
    }
    return 0;
}