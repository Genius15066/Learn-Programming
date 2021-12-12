#include <bits/stdc++.h>
using namespace std;

int countBits(int x)
{
    int count = 0;
    while (x > 0)
    {
        count += (x & 1);
        x = x >> 1;
    }
    return count;
}

int main()
{
    int a, b, test;
    cin>>test;
    while (test--)
    {
        int bitcount = 0;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
        {
            if ((i & 1) == 0 && i < b)
            {
                bitcount += 2 * countBits(i) + 1;
                i++;
                continue;
            }
            bitcount += countBits(i);
        }
        cout << bitcount << endl;
    }
}