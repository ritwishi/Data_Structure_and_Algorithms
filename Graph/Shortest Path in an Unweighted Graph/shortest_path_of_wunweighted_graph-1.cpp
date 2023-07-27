#include <bits/stdc++.h>
using namespace std;

void BFS(vector<int> adj[], int V, int s, int dist[])
{
    bool visted[V + 1];

    for (int i = 0; i < V; i++)
    {
        visted[i] = false;
    }

    queue<int> q;

    q.push(s);

    visted[s] = true;

    while (q.empty() == false)
    {
        int u = q.front();

        q.pop();

        for (int v : adj[u])
        {
            if (visted[v] == false)
            {
                dist[v] = dist[u] + 1;

                visted[v] = true;

                q.push(v);
            }
        }
    }
}

void addedge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
    int V = 4;

    vector<int> adj[V];

    addedge(adj, 0, 1);
    addedge(adj, 0, 2);
    addedge(adj, 1, 2);
    addedge(adj, 1, 3);
    addedge(adj, 2, 3);

    int dist[V];

    for (int i = 0; i < V; i++)
    {
        dist[V] = INT_MAX;
    }

    dist[0] = 0;

    BFS(adj, V, 0, dist);

    for (int i = 0; i < V; i++)
    {
        cout << dist[i] << " ";
    }

    return 0;
}