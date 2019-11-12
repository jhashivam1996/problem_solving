#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int *doBFT(int arr[6][6], int n, int starting_vertex)
{
    queue<int> q;
    q.push(starting_vertex);
    int traversed[n] = {0};
    traversed[starting_vertex] = 1;
    int *parent = new int;
    for (int i = 0; i < n; i++)
        parent[i] = -1;

    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        //cout << x << " ";
        for (int i = 0; i < n; i++)
        {
            if (arr[x][i] == 1 && traversed[i] != 1)
            {
                q.push(i);
                traversed[i] = 1;

                parent[i] = x;
            }
        }
    }

    return parent;
}
void shortest_path(int arr[6][6], int src, int dest)
{
    vector<int> v;
    int *parent = doBFT(arr, 6, src);
    int find = src;
    for (int j = 0; j < 6; j++)
    {
        cout << parent[j];
    }
    for (int j = 0; j < 6; j++)
    {
        for (int i = 0; i < 6; i++)
        {
            if (parent[i] == -1)
            {
                cout << "\nyou are on the destination.\n";
            }
            if (parent[i] == find)
            {
                v.push_back(find);
                find = i;
            }
            if (find == dest)
            {
                cout << "finally,found the path.";
                break;
            }
            else
            {
                cout << "\nnot found.";
            }
        }
    }
}

int main()
{
    int src = 0;
    int dest = 4;
    int graph[6][6] = {{0, 1, 0, 0, 1, 0},
                       {1, 0, 1, 0, 0, 0},
                       {0, 1, 0, 1, 0, 0},
                       {1, 0, 1, 0, 0, 1},
                       {1, 0, 0, 0, 0, 0},
                       {0, 0, 0, 1, 0, 0}};

    shortest_path(graph, src, dest);
}
