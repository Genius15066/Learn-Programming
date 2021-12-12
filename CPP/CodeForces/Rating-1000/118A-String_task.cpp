#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../Utilities/input.txt", "r", stdin);
    freopen("../Utilities/output.txt", "w", stdout);
#endif
    string s, s1;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (!islower(s[i]))
        {
            s[i] = tolower(s[i]);
        }
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
        {
            continue;
        }
        else
        {

            s1 += '.';
            s1 += s[i];
        }
    }
    cout << s1;
    return 0;
}