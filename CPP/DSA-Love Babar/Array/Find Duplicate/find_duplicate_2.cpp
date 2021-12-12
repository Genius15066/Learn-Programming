#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &arr,int n)
    {
        for (int i = 0; i < n; i++)
        {
            arr[arr[i] % n] = arr[arr[i] % n] + n;
        }
        int duplicate;
        for (int i = 0; i < n; i++)
        {
            if (arr[i]/n>1)
            {  
                duplicate=i;
            }
        }
        return duplicate;
    }
};

int main()
{
    vector<int> v;
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    Solution ob;
    int x=ob.findDuplicate(v,n);
    cout<<x;
}