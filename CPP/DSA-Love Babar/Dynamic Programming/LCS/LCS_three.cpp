// { Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

 // } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(string s1, string s2,string s3)
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


// { Driver Code Starts.
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
     freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int t;
    cin>>t;
    while(t--)
    {
                // Take size of both the strings as input
        string s1,s2,s3;
        cin>>s1>>s2>>s3;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(s1, s2,s3) << endl;
    }
    return 0;
}