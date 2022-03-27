/*
    Problem Name: Find the maximum and minimum element in an array
    Solving Date: 26-03-2022
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int max_element(vector<int> &v)
    {
        int maximum=INT_MIN;
        for(int i=0;i<v.size();i++){
            if(v[i]>maximum){
                maximum=v[i];
            }
        }
        return maximum;
    }

    int min_element(vector<int> &v)
    {
       int minimum=INT_MAX;
        for(int i=0;i<v.size();i++){
            if(v[i]<minimum){
                minimum=v[i];
            }
        }
        return minimum;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../Utilities/input.txt", "r", stdin);
    freopen("../Utilities/output.txt", "w", stdout);
#endif
    int n;
    vector<int> array;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        array.push_back(x);
    }
    Solution ob;
    int max_element=ob.max_element(array);
    int min_element=ob.min_element(array);
    cout<<"min_element : "<<min_element<<endl;
    cout<<"max_element : "<<max_element<<endl;

    return 0;
}