#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <stack>
using namespace std;

class Graph
{
private:
    map<int, list<int>> mp;

public:
    void addEdge(int u, int v, bool bid = true)
    {
        mp[u].push_back(v);
        if (bid)
            mp[v].push_back(u);
    }

    void printGraph()
    {
        for (auto x : mp)
        {
            cout << x.first << "-> ";
            for (int y : x.second)
                cout << y << " ";
            cout << endl;
        }
    }
    int size()
    {
        return mp.size();
    }
    void shortestPath(Graph, int, int);
    void DFS(Graph, int);
    bool IsCyclic(Graph);
    bool IsCycle(int, bool *, int);
};
void printPath(int par[], int dest)
{
    if (dest == -1)
    {
        return;
    }
    printPath(par, par[dest]);
    cout << dest << "-->";
}
void Graph::shortestPath(Graph g, int src, int dest)
{
    int *steps = new int[g.size()];
    int *parent = new int[g.size()];
    bool *visited = new bool[g.size()];
    for (int i = 0; i < g.size(); i++)
    {
        steps[i] = 0;
        parent[i] = -1;
        visited[i] = false;
    }
    queue<int> q;
    q.push(src);
    visited[src] = -1;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (int y : mp[x])
        {
            if (!visited[y])
            {
                q.push(y);
                visited[y] = true;
                steps[y] = steps[x] + 1;
                parent[y] = x;
            }
        }
    }
    cout << "\nShortest path: ";
    printPath(parent, dest);
    cout << "\nMinimum steps required: " << steps[dest];
}

void Graph::DFS(Graph g, int src)
{
    bool *visited = new bool[g.size()];
    stack<int> st;
    for (int i = 0; i < g.size(); i++)
    {
        visited[i] = false;
    }
    st.push(src);
    while (!st.empty())
    {
        src = st.top();
        st.pop();

        if (!visited[src])
        {
            cout << src << " ";
            visited[src] = true;
        }
        for (int x : mp[src])
        {
            if (!visited[x])
            {
                st.push(x);
            }
        }
    }
}

bool Graph::IsCycle(int u, bool *visited, int parent)
{
    visited[u] = true;
    for (int x : mp[u])
    {
        if (!visited[x])
        {
            if (!IsCycle(x, visited, u))
                return true;
        }
        else if (x != parent)
            return true;
    }
    return false;
}

bool Graph::IsCyclic(Graph g)
{

    bool *visited = new bool[g.size()];
    for (int i = 0; i < g.size(); i++)
        visited[i] = false;

    for (int u = 0; u < g.size(); u++)
        if (!visited[u])
            if (IsCycle(u, visited, -1))
                return true;

    return false;
}

int main()
{
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 3);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    //g.shortestPath(g, 3, 4);
    //g.DFS(g, 0);
    cout << g.IsCyclic(g);
    return 0;
}