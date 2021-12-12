#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:

    int sb(int arr[], int n, int x)
    {
       int start=0,end=0,length=n,sum=0;
       while(end<n){
           while(sum<=x && end<n){
               sum+=arr[end];
               end++;
           }
           while(sum>x && start<n){
               length=min(length,end-start);
               sum-=arr[start];
               start++;
           }
       }
       return length;
       
    }
};


int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.sb(a,n,x)<<endl;
	}
	return 0;
} 