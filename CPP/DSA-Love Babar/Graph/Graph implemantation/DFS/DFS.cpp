/*

Date: 21th August 2021
Problem Name: DFS implementation
Solution/Problem type: Graph
Time Complexity: O()
Space Complexity:O()

*/


#include <bits/stdc++.h> 
using namespace std; 

class Graph
{
    public:
    map<int,bool>visited;
    map<int,list<int>>adj;

    void addEdge(int u,int v){
        adj[u].push_back(v);
    }

    void DFS(int root){
        visited[root]=true;
        cout<<root<<" ";

        list<int>::iterator it;

        for(it=adj[root].begin();it!=adj[root].end();it++){
            if(!visited[*it]){
                DFS(*it);
            }
        }
    }  
};



int main() 
{ 
    #ifndef ONLINE_JUDGE
    freopen("../../../Utilities/input.txt", "r", stdin);
    freopen("../../../Utilities/output.txt", "w", stdout);
#endif

    Graph g; 
     
    int e;
    cin>>e;
    while(e--){
        int u,v;
        cin>>u>>v;
        g.addEdge(u, v);
    }

       g.DFS(1);
       cout<<endl;
  
 
    return 0;
} 