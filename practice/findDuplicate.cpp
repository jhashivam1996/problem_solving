#include <iostream>
using namespace std;

void findDuplicates(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] += 1;
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[abs(arr[i])] >= 0)
        {
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        }
        else
        {
            cout << abs(arr[i]) - 1 << " ";
        }
    }
}

int main()
{
    int arr[] = {4, 3, 8, 4, 3, 5, 0, 8, 0};
    int size = sizeof(arr) / sizeof(int);
    findDuplicates(arr, size);
}
