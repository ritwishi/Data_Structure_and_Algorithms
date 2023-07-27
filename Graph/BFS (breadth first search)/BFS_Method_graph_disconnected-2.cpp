#include <bits/stdc++.h>
using namespace std;

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

void addedge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void BFS(vector<int> adj[], int s, bool visted[])
{
    queue<int> q;

    visted[s] = true;

    q.push(s);

    while (q.empty() == false)
    {
        int u = q.front();

        q.pop();

        cout << u << " ";

        for (int v : adj[u])
        {
            if (visted[v] == false)
            {
                visted[v] = true;

                q.push(v);
            }
        }
    }
}

void BFSDin(vector<int> adj[], int V)
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
            BFS(adj, i, visted);
        }
    }
}

int main()
{
    int V = 7;

    vector<int> adj[V];

    addedge(adj, 0, 1);
    addedge(adj, 0, 2);
    addedge(adj, 1, 3);
    addedge(adj, 2, 3);
    addedge(adj, 4, 5);
    addedge(adj, 4, 6);
    addedge(adj, 5, 6);

    printgraph(adj, V);

    cout << "Following is Breadth First Traversal: " << endl;
    BFSDin(adj, V);

    return 0;
}