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
    string w;
    cin>>w;

    int cap,small;
    cap=small=0;

    for(int i=0;i<w.length();i++){
        if(islower(w[i])){
            small++;
        }
        else{
            cap++;
        }
    }

    if(small>=cap){
         transform(w.begin(), w.end(), w.begin(), ::tolower);
    }
    else{
         transform(w.begin(), w.end(), w.begin(), ::toupper);
    }
    cout<<w;

    return 0;
}