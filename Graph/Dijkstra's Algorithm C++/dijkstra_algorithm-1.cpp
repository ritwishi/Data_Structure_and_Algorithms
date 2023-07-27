#include <bits/stdc++.h>
using namespace std;

const int V = 4;

vector<int> dijkstra(int graph[V][V], int src)
{
    vector<int> dist(V, INT_MAX);

    vector<bool> fin(V, false);

    dist[src] = 0;

    for (int count = 0; count < V - 1; count++)
    {
        int u = -1;

        for (int i = 0; i < V; i++)
        {
            if (fin[i] == false && (u == -1 || dist[i] < dist[u]))
            {
                u = i;
            }
        }

        fin[u] = true;

        for (int v = 0; v < V; v++)
        {
            if (fin[v] == false && graph[u][v] != 0)
            {
                dist[v] = min(dist[v], dist[u] + graph[u][v]);
            }
        }
    }

    return dist;
}

int main()
{
    int graph[V][V] = {
        {0, 50, 100, 0},
        {50, 0, 30, 200},
        {100, 30, 0, 20},
        {0, 200, 20, 0},
    };

    for (int x : dijkstra(graph, 0))
    {
        cout << x << " ";
    }

    return 0;
}