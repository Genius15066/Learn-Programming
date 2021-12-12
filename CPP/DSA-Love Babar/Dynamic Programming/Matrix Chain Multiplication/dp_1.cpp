#include <bits/stdc++.h>
using namespace std;

int MatrixChainOrder(int p[], int n)
{
    int minimum,q;
    int m[n][n],s[n][n];
    memset(m,0,sizeof(m));
    memset(s,0,sizeof(s));

    for(int d=1;d<n-1;d++){
        for(int i=1;i<n-d;i++){
            int j=i+d;
            minimum=INT_MAX;
            for(int k=i;k<=j-1;k++){
              q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
              if(q<minimum){
                  s[i][j]=k;
                  minimum=q;
              }
              m[i][j]=minimum;
              
            }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Tracing table"<<endl;

       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
  return m[1][n-1];
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../../Xtra/input.txt", "r", stdin); 
    freopen("../../Xtra/output.txt", "w", stdout);
#endif
  int t;
  cin>>t;
  while(t--){
      int size;
      cin>>size;
      int arr[size];
      for(int i=0; i<size;i++){
          cin>>arr[i];
      }
      cout<<MatrixChainOrder(arr,size);
  }
}

