/*

Date: 9th August 2021
Problem Name: Implement a graph using adjacency matrix
Solution type: Graph
Time Complexity: O()
Space Complexity:O()

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void graph(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printGraph(vector<int> adj[], int v)
{
    for (int i = 0; i < v; ++i)
    {
        cout << "\n Adjacency list of vertex " << i << "\n head ";

        for (auto x : adj[i])
        {
            cout << "-> " << x;
        }
        cout << endl;
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("../../Utilities/output.txt", "w", stdout);
   #endif
    int v = 5;
    vector<int> adj[v];

    graph(adj, 0, 1);
    graph(adj, 0, 4);
    graph(adj, 1, 2);
    graph(adj, 1, 3);
    graph(adj, 1, 4);
    graph(adj, 2, 4);
    graph(adj, 2, 3);
    graph(adj, 3, 4);
   

    printGraph(adj, v);
}
