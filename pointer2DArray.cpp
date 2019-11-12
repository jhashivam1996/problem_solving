#include <iostream>
#include <stdlib.h>
using namespace std;

int **create2DArray(int m, int n)
{
    int **a = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        a[i] = (int *)malloc(n * sizeof(int));
    }
    return a;
}

void read2DArray(int **arr, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        cout << "\n";
        for (int j = 0; j < n; j++)
        {
            *(*(arr + i) + j) = j + 1;
            cout << *(*(arr + i) + j) << " ";
        }
    }
    cout << "\n";
}

void addMatrices(int **a, int **b, int **c, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(*(c + i) + j) = (*(*(a + i) + j) + *(*(b + i) + j));
        }
    }
}

void printSum(int **c, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        cout << "\n";
        for (int j = 0; j < n; j++)
        {
            cout << *(*(c + i) + j) << " ";
        }
    }
    cout << "\n";
}

void deleteArray(int **arr, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        free(arr[i]);
    }
    free(arr);
}

int main()
{
    int **a, **b, **c;
    int m = 3, n = 3;
    a = create2DArray(m, n);
    b = create2DArray(m, n);
    c = create2DArray(m, n);
    cout << "First 2DArray:";
    read2DArray(a, m, n);
    cout << "Second 2DArray:";
    read2DArray(b, m, n);
    cout << "\n";
    cout << "Addition:";
    addMatrices(a, b, c, m, n);
    printSum(c, m, n);
    deleteArray(a, m, n);
    deleteArray(b, m, n);
    deleteArray(c, m, n);
    cout << "\n";
    cout << "after releasing the memory: ";
    printSum(c, m, n);
}
