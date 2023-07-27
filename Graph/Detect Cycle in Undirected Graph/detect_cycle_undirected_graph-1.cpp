#include <bits/stdc++.h>
using namespace std;

bool DFSrec(vector<int> adj[], int s, bool visted[], int parent)
{
    visted[s] = true;

    for (int u : adj[s])
    {
        if (visted[u] == false)
        {
            if (DFSrec(adj, u, visted, s) == true)
            {
                return true;
            }
        }

        else if (u != parent)
        {
            return true;
        }
    }

    return false;
}

bool DFS(vector<int> adj[], int V)
{
    bool visted[V + 1];

    for (int i = 0; i < V; i++)
    {
        visted[i] = false;
    }

    for (int i = 0; i < V; i++)
    {
        if (visted[i] == false)
        {
            if (DFSrec(adj, i, visted, -1) == true)
            {
                return true;
            }
        }
    }

    return false;
}

void addedge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
    int V = 6;

    vector<int> adj[V];

    addedge(adj, 0, 1);
    addedge(adj, 1, 2);
    addedge(adj, 1, 3);
    addedge(adj, 2, 3);
    addedge(adj, 2, 4);
    addedge(adj, 4, 5);

    if (DFS(adj, V))
    {
        cout << "cycle found" << endl;
    }

    else
    {
        cout << "cycle not found" << endl;
    }

    return 0;
}