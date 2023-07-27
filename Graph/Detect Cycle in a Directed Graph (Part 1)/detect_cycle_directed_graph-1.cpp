#include <bits/stdc++.h>
using namespace std;

bool DFSrec(vector<int> adj[], int s, bool visted[], bool recst[])
{
    visted[s] = true;

    recst[s] = true;

    for (int u : adj[s])
    {
        if (visted[u] == false)
        {
            if (DFSrec(adj, u, visted, recst) == true)
            {
                return true;
            }
        }

        else if (recst[u] == true)
        {
            return true;
        }
    }

    recst[s] = false;

    return false;
}

bool DFS(vector<int> adj[], int V)
{
    bool visted[V + 1];

    for (int i = 0; i < V; i++)
    {
        visted[i] = false;
    }

    bool recst[V + 1];

    for (int i = 0; i < V; i++)
    {
        recst[i] = false;
    }

    for (int i = 0; i < V; i++)
    {
        if (visted[i] == false)
        {
            if (DFSrec(adj, i, visted, recst) == true)
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
}

int main()
{
    int V = 6;

    vector<int> adj[V];

    addedge(adj, 0, 1);
    addedge(adj, 1, 2);
    addedge(adj, 2, 3);
    addedge(adj, 3, 4);
    addedge(adj, 4, 5);
    addedge(adj, 5, 2);
    addedge(adj, 5, 3);

    if (DFS(adj, V) == true)
    {
        cout << "yes" << endl;
    }

    else
    {
        cout << "no" << endl;
    }

    return 0;
}