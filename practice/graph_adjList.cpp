#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V)
{
	for (int v = 0; v < V; ++v)
	{
		cout << "\n Adjacency list of vertex "
			 << v << "\n head ";
		for (vector<int>::iterator x = adj[v].begin(); x != adj[v].end(); ++x)
			cout << "-> " << *x;
		cout << endl;
	}
}

void doBFT(vector<int> arr[], int n, int starting_vertex)
{
	queue<int> q;
	q.push(starting_vertex);
	int traversed[n] = {0};
	traversed[starting_vertex] = 1;
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		cout << x << " ";
		for (vector<int>::iterator i = arr[x].begin(); i != arr[x].end(); i++)
		{
			if (traversed[*i] != 1)
			{
				q.push(*i);
				traversed[*i] = 1;
			}
		}
	}
}

int main()
{
	int V = 5;
	vector<int> adj[V];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 4);
	addEdge(adj, 0, 1);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);
	printGraph(adj, V);
	cout << endl
		 << "graph traversal: ";
	doBFT(adj, V, 4);
	return 0;
}
