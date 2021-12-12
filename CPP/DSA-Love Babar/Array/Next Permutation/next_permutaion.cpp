#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(vector<int> &nums)
{
    int first, second, firstIndex, secondIndex, flag = nums.size() - 1;
    for (int i = nums.size() - 1; i >= 0; i--, flag--)
    {
        if (i == 0)
        {
            reverse(nums.begin(), nums.end());
            break;
        }
        else
        {
            if (nums[i] > nums[i - 1])
            {
                first = nums[i - 1];
                firstIndex = i - 1;
                break;
            }
        }
    }

    if (flag != 0)
    {

        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (nums[i] > first)
            {
                second = nums[i];
                secondIndex = i;
                break;
            }
        }
        swap(nums[firstIndex], nums[secondIndex]);
        
        reverse(nums.begin() + firstIndex+1, nums.end());
    }
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
