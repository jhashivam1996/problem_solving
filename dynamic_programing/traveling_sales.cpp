#include <iostream>
#include <climits>
#define N 4
using namespace std;

int graph[][N] = {{0, 20, 42, 25},
                  {20, 0, 30, 34},
                  {42, 30, 0, 10},
                  {25, 34, 10, 0}};

int VISITED_ALL = (1 << N) - 1;
int tsp(int mask, int pos)
{
    if (mask == VISITED_ALL)
    {
        return graph[pos][0];
    }
    int ans = INT_MAX;
    for (int city = 0; city < N; city++)
    {
        if ((mask & (1 << city)) == 0)
        {
            int newans = graph[pos][city] + tsp((mask | (1 << city)), city);
            ans = min(ans, newans);
        }
    }
    return ans;
}

int main()
{
    int src = 0;
    int mask = 1;
    cout << tsp(mask, src);
    return 0;
}
