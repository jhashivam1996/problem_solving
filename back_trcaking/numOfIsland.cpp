#include <iostream>
#define row 5
#define col 5
using namespace std;

int dfs(int mat[][col], int i, int j)
{
    if (i >= row || i < 0 || j >= col || j < 0 || mat[i][j] == 0)
    {
        return 0;
    }
    mat[i][j] = 0;
    dfs(mat, i + 1, j);
    dfs(mat, i - 1, j);
    dfs(mat, i, j + 1);
    dfs(mat, i, j - 1);
    return 1;
}

int numOfIsland(int mat[][col])
{

    int numOfIsland = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mat[i][j] == 1)
            {
                numOfIsland += dfs(mat, i, j);
            }
        }
    }
    return numOfIsland;
}

int main()
{
    int mat[][col] = {{1, 1, 0, 0, 0},
                      {0, 1, 0, 0, 1},
                      {0, 0, 0, 1, 1},
                      {1, 0, 0, 0, 0},
                      {1, 0, 1, 0, 1}};
    cout << "Number of island: " << numOfIsland(mat);
    return 0;
}