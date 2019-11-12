#include <iostream>
using namespace std;

int num_of_ways(int x, int y)
{
    int numofways[x][y];
    numofways[0][0] = 1;
    for (int i = 0; i < x; i++)
    {
        numofways[0][i] = 1;
    }
    for (int i = 0; i < y; i++)
    {
        numofways[i][0] = 1;
    }
    for (int i = 1; i <= x - 1; i++)
    {
        for (int j = 1; j <= y - 1; j++)
        {
            numofways[i][j] = numofways[i - 1][j] + numofways[i][j - 1];
        }
    }
    cout << numofways[x - 1][y - 1];
}

int main()
{
    num_of_ways(10, 10);
}