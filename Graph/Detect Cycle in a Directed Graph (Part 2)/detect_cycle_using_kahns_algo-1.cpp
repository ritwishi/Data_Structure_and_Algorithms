#include <bits/stdc++.h>
using namespace std;

void topologicalsort(vector<int> adj[], int V)
{
    vector<int> indegree(V);

    for (int i = 0; i < V; i++)
    {
        indegree[i] = 0;
    }

    for (int u = 0; u < V; u++)
    {
        for (int x : adj[u])
        {
            indegree[x]++;
        }
    }

    queue<int> q;

    for (int i = 0; i < V; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }

    int count = 0;

    while (q.empty() == false)
    {
        int u = q.front();

        q.pop();

        for (int x : adj[u])
        {
            indegree[x]--;

            if (indegree[x] == 0)
            {
                q.push(x);
            }
        }

        count++;
    }

    if (count != V)
    {
        cout << "cycle found" << endl;
    }

    else
    {
        cout << "cycle not found" << endl;
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

    addedge(adj, 0, 1);
    addedge(adj, 4, 1);
    addedge(adj, 1, 2);
    addedge(adj, 2, 3);
    addedge(adj, 3, 1);

    topologicalsort(adj, V);

    return 0;
}