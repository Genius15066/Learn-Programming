#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int kthSmallest(int arr[], int l, int r, int k)
    {
        sort(arr, arr + r);
        cout << "print start" << endl;
        for (int i = 0; i < r; i++)
        {
            cout << arr[i] << " " << endl;
        }
        cout << "print finish" << endl;
        return arr[k-1];
    }
};

int main()
{
    int test_case;
    cout << "No of test case" << endl;
    cin >> test_case;
    while (test_case--)
    {
        int number_of_elements;
        cout<<"enter elements"<<endl;
        cin >> number_of_elements;
        int arr[number_of_elements];

        for (int i = 0; i < number_of_elements; i++)
        {
            cin >> arr[i];
        }

        int k;
        cout << "position" << endl;
        cin >> k;
        Solution ob;
        cout << ob.kthSmallest(arr, 0, number_of_elements, k) << endl;
    }
}