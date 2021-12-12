#include<bits/stdc++.h>
using namespace std;

int min_jump(int arr[],int n)
{
   int i=0,range=0+arr[0],new_range=0,jump=0,sec_range=0;
  
   while(i<n)
   {
      
       if(arr[i]+i>new_range)
       {
        new_range=arr[i]+i;
        sec_range=0;
       }
       if(arr[i]+i>sec_range && arr[i]+i<new_range)
       {
           sec_range=arr[i]+i;
       }
        if(i==range || i==n-1)
       {
           jump++;
           range=new_range;
           new_range=0;
           if(range<n && arr[range]==0)
           {
               return -1;
           }
       }
       i++;
   }
   return jump;
}

int  main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=min_jump(arr,n);
    cout<<ans;
    return 0;

}

