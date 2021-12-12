#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        if (N==0) return 0;

        unordered_map<int,int>m;
        int currentsum=0,i=0,count=0;

        while(i<N){
            currentsum+=Arr[i];
 
            if(currentsum==k) count++;
            
            if(m.find(currentsum-k)!=m.end())
                  count+=m[currentsum-k];

            m[currentsum]++;
            i++;
        }
       
        return count;
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
} 