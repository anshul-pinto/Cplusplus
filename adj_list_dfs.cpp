#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void add_edge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfs(vector<int> adj[], vector<bool> &visited, int r)
{
    visited[r]=true;
    cout<<r<<" ";
    for(int i =0; i<adj[r].size(); i++)
    {
        if(visited[adj[r][i]]==false)
        {
            dfs(adj, visited, adj[r][i]);
        }
    }
}

void dfs_wrapper(vector<int> adj[], int V)
{ 
    // V = number of vertices
    // adj[] is the adjacency list to be made
    vector<bool> visited(V, false); //initialize visted array as false
    for (int u=0; u<V; u++) 
        if (visited[u] == false) 
            dfs(adj, visited, u); 
}


int main()
{
   int V = 8;
   
   vector<int> adj[V];
   
   add_edge(adj, 0,2);
   add_edge(adj, 0,3);
   add_edge(adj, 0,4);
   add_edge(adj, 0,1);
   add_edge(adj, 1,2);
   add_edge(adj, 1,3);
   add_edge(adj, 1,4);
   add_edge(adj, 4,7);
   add_edge(adj, 4,6);
   add_edge(adj, 3,5);
   
   dfs_wrapper(adj, V);
   return 0;
}
