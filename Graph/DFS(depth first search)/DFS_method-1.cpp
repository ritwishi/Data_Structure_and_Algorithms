#include <bits/stdc++.h>
using namespace std;

void DFSrec(vector<int> adj[], int s, bool visted[])
{
    visted[s] = true;

    cout << s << " ";

    for (int u : adj[s])
    {
        if (visted[u] == false)
        {
            DFSrec(adj, u, visted);
        }
    }
}

void DFS(vector<int> adj[], int V, int s)
{
    bool visted[V + 1];

    for (int i = 0; i < V; i++)
    {
        visted[i] = false;
    }

    DFSrec(adj, s, visted);
}

void addedge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printgraph(vector<int> adj[], int V)
{
    for (int i = 0; i < V; i++)
    {
        for (int x : adj[i])
        {
            cout << x << " ";
        }

        cout << endl;
    }
}

int main()
{
    int V = 5;

    vector<int> adj[V];

    addedge(adj, 0, 1);
    addedge(adj, 0, 2);
    addedge(adj, 1, 3);
    addedge(adj, 1, 4);
    addedge(adj, 3, 2);
    addedge(adj, 3, 4);

    printgraph(adj, V);

    cout << endl;

    cout << "Following is Depth First Traversal: " << endl;
    DFS(adj, V, 0);

    return 0;
}