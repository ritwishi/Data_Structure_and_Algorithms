#include <bits/stdc++.h>
using namespace std;

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

void DFSrec(vector<int> adj[], int s, bool visted[])
{
    visted[s] = true;

    for (int u : adj[s])
    {
        if (visted[u] == false)
        {
            DFSrec(adj, u, visted);
        }
    }
}

int DFS(vector<int> adj[], int V)
{
    bool visted[V + 1];

    int count = 0;

    for (int i = 0; i < V; i++)
    {
        visted[i] = false;
    }

    for (int i = 0; i < V; i++)
    {
        if (visted[i] == false)
        {
            DFSrec(adj, i, visted);
            count++;
        }
    }

    return count++;
}

int main()
{
    int V = 5;

    vector<int> adj[V];

    addedge(adj, 0, 1);
    addedge(adj, 0, 2);
    addedge(adj, 1, 2);
    addedge(adj, 3, 4);

    printgraph(adj, V);

    cout << "Number of connected components: " << DFS(adj, V);

    return 0;
}