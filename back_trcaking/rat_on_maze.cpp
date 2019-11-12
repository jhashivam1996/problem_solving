#include <iostream>
using namespace std;

int sol[][5] = {0};

bool isSafe(int maze[][5], int i, int j)
{
    if (maze[i][j] == 0 || sol[i][j] == 1 || i >= 5 || i < 0 || j >= 5 || j < 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void printPath()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << sol[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void numofways(int maze[][5], int i, int j, int &c)
{
    if (i == 4 && j == 4)
    {
        sol[i][j] = 1;
        printPath();
        c++;
        return;
    }
    if (!isSafe(maze, i, j))
    {
        return;
    }

    sol[i][j] = 1;
    numofways(maze, i, j + 1, c);
    numofways(maze, i, j - 1, c);
    numofways(maze, i + 1, j, c);
    numofways(maze, i - 1, j, c);
    sol[i][j] = 0;
}

int main()
{
    int maze[][5] = {{1, 0, 1, 0, 0},
                     {1, 1, 1, 0, 0},
                     {1, 1, 1, 1, 0},
                     {0, 1, 0, 1, 0},
                     {0, 1, 1, 1, 1}};
    int c = 0;
    numofways(maze, 0, 0, c);
    cout << endl
         << "Total number of ways: " << c;
    return 0;
}