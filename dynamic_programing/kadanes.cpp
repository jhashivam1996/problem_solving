#include <iostream>
using namespace std;
struct max_s
{
    int max_sum;
    int start;
    int end;
};
max_s max_sum(int arr[], int size)
{
    int max_global = 0;
    int curr_sum = 0;
    int start = 0, end = 0;
    for (int i = 0; i < size; i++)
    {
        curr_sum += arr[i];
        if (max_global < curr_sum)
        {
            max_global = curr_sum;
            end = i;
        }

        if (curr_sum < 0)
        {
            curr_sum = 0;
            start = i + 1;
        }
    }
    return {max_global, start, end};
}


int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3, -2};
    cout << max_sum(a, sizeof(a) / sizeof(int)).max_sum;
}