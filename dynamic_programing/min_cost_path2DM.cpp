#include <iostream>
using namespace std;
#define N 4
int minCost(int mat[][N])
{
    int MinCost[N][N];

    MinCost[0][0] = mat[0][0];
    for (int i = 1; i <= N - 1; i++)
    {
        MinCost[0][i] = MinCost[0][i - 1] + mat[0][i];
    }
    for (int i = 1; i <= N - 1; i++)
    {
        MinCost[i][0] = MinCost[i - 1][0] + mat[i][0];
    }
    for (int i = 1; i <= N - 1; i++)
    {
        for (int j = 1; j <= N - 1; j++)
        {
            MinCost[i][j] = min(MinCost[i - 1][j], MinCost[i][j - 1]) + mat[i][j];
        }
    }

    cout << MinCost[N - 1][N - 1] << " ";
}

int main()
{
    int mat[][N] = {
        {2, 0, 5, 3},
        {1, 0, 1, 0},
        {2, 9, 5, 1},
        {7, 0, 1, 3},
    };
    minCost(mat);
}