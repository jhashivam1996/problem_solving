
#include <iostream>
#include <algorithm>
using namespace std;

void calcNthMax_Min(int arr[], int n, int size)
{
    sort(arr, arr + size);
    cout << endl
         << n << "th Max:" << arr[size - n];
    cout << endl
         << n << "th Min:" << arr[n - 1];
}

void calc2ndMax(int arr[], int size)
{
    int max = 0;
    int sec_max = 0;
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            sec_max = max;
            max = arr[i];
        }
        else if (sec_max < arr[i])
        {
            sec_max = arr[i];
        }
    }
    cout << "2nd Max: " << sec_max << endl
         << endl;
}

int main()
{
    int arr[] = {4, 9, 99, 25, 8, 45, 100, 78};
    calc2ndMax(arr, 8);
    calcNthMax_Min(arr, 1, 8);
}
