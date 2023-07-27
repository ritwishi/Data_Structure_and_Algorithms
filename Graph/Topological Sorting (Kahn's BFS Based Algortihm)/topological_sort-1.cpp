#include <bits/stdc++.h>
using namespace std;

void topologicalsort(vector<int> adj[], int V)
{
    vector<int> in_degree(V);

    for (int i = 0; i < V; i++)
    {
        in_degree[i] = 0;
    }

    for (int u = 0; u < V; u++)
    {
        for (int x : adj[u])
        {
            in_degree[x]++;
        }
    }

    queue<int> q;

    for (int i = 0; i < V; i++)
    {
        if (in_degree[i] == 0)
        {
            q.push(i);
        }
    }

    while (q.empty() == false)
    {
        int u = q.front();

        q.pop();

        cout << u << " ";

        for (int x : adj[u])
        {
            in_degree[x]--;

            if (in_degree[x] == 0)
            {
                q.push(x);
            }
        }
    }
}

void addedge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}

int main()
{
    int V = 5;

    vector<int> adj[V];

    addedge(adj, 0, 2);
    addedge(adj, 0, 3);
    addedge(adj, 2, 3);
    addedge(adj, 1, 3);
    addedge(adj, 1, 4);

    cout << "Following is a Topological Sort of" << endl;
    topologicalsort(adj, V);

    return 0;
}