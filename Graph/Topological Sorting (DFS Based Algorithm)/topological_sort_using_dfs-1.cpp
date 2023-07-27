#include <bits/stdc++.h>
using namespace std;

void DFS(vector<int> adj[], int s, stack<int> &st, bool visted[])
{
    visted[s] = true;

    for (int x : adj[s])
    {
        if (visted[x] == false)
        {
            DFS(adj, x, st, visted);
        }
    }

    st.push(s);
}

void topologicalsort(vector<int> adj[], int V)
{
    bool visted[V];

    for (int i = 0; i < V; i++)
    {
        visted[i] = false;
    }

    stack<int> st;

    for (int u = 0; u < V; u++)
    {
        if (visted[u] == false)
        {
            DFS(adj, u, st, visted);
        }
    }

    while (st.empty() == false)
    {
        int u = st.top();

        st.pop();

        cout << u << " ";
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
    addedge(adj, 1, 3);
    addedge(adj, 3, 4);
    addedge(adj, 2, 3);
    addedge(adj, 2, 4);

    cout << "Following is a Topological Sort of" << endl;
    ;
    topologicalsort(adj, V);

    return 0;
}