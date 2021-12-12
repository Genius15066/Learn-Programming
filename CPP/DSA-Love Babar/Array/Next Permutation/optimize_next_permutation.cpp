#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(vector<int> &nums)
{
    int n = nums.size();
    int i = n - 2;

    while (i >= 0 && nums[i] >= nums[i + 1])
    {
        i--;
    }
    if (i >= 0)
    {
        int j = n - 1;
        while (j >= 0 && nums[j] <= nums[i])
        {
            j--;
        }
        swap(nums[i], nums[j]);
    }

    reverse(nums.begin() + i + 1, nums.end());
    for (int i : nums)
    {
        cout << i << " ";
    }
}
int main()
{
    vector<int> v;
    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int digit;
        cin >> digit;
        v.push_back(digit);
    }
    solve(v);
}
