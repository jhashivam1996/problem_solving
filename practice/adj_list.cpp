#include <iostream>
#include <list>
#include <map>
#include <climits>
#define V 5
using namespace std;

class Graph
{
    map<int, list<pair<int, int>>> mp;

public:
    void addEdge(int, int, int, bool);
    void printGraph();
    void shortestPath(Graph, int, int);
    int extractMin(int *, bool *);
    void printPath(int *, int);
};
void Graph::addEdge(int u, int v, int cost, bool bid = true)
{
    mp[u].push_back(make_pair(v, cost));
    if (bid)
    {
        mp[v].push_back(make_pair(u, cost));
    }
}
void Graph::printGraph()
{
    for (auto x : mp)
    {
        cout << x.first << "-> ";
        for (auto y : x.second)
        {
            cout << "-->" << y.first << " C-" << y.second << ",  ";
        }
        cout << endl;
    }
}

void Graph::printPath(int *parent, int dest)
{
    if (dest == -1)
    {
        return;
    }
    printPath(parent, parent[dest]);
    cout << dest << "-->";
}
int Graph::extractMin(int dist[], bool sptSet[])
{
    int min = INT_MAX, min_index = -1;
    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;
    return min_index;
}

void Graph::shortestPath(Graph g, int src, int dest)
{
    int *distance = new int[V];
    bool *visited = new bool[V];
    int *parent = new int[V];
    for (int i = 0; i < V; i++)
    {
        distance[i] = INT_MAX;
        visited[i] = false;
        parent[i] = -1;
    }
    distance[src] = 0;
    for (int i = 0; i < V - 1; i++)
    {
        int u = extractMin(distance, visited);
        visited[u] = true;
        for (auto v : mp[u])
        {
            if (!visited[v.first] && distance[u] != INT_MAX)
            {
                if (distance[v.first] > distance[u] + v.second)
                {
                    distance[v.first] = distance[u] + v.second;
                    parent[v.first] = u;
                }
            }
        }
    }
    cout << "Shortest path from " << src << " to " << dest << ": " << endl;
    printPath(parent, dest);
    cout << "\nMinimum cost: " << distance[dest];
}

int main()
{
    Graph g;
    g.addEdge(0, 1, 5);
    g.addEdge(0, 4, 15);
    g.addEdge(1, 2, 7);
    g.addEdge(1, 3, 6);
    g.addEdge(1, 4, 3);
    g.addEdge(2, 3, 8);
    g.addEdge(3, 4, 2);
    cout << " \n";
    g.shortestPath(g, 0, 3);

    return 0;
}