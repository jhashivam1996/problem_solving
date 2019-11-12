#include <iostream>
#include <climits>
using namespace std;

int maxlength(int arr[11], int size, int k)
{
    int maxlen = 0;
    int currsum = 0;
    int start;
    int end;
    int j = 0;
    int i = 0;
    for (; i < size;)
    {
        if (currsum < k)
        {
            currsum += arr[i];
            i++;
        }
        else if (currsum > k)
        {
            currsum -= arr[j];
            j++;
        }
        else if (currsum == k)
        {
            if (maxlen < i - j)
            {
                maxlen = i - j;
                start = j;
                end = i - 1;
            }
            else
            {
                i++;
            }
            currsum -= arr[j];
            j++;
        }
    }
    if (maxlen)
        cout << "subrray found between index " << start << " and " << end << endl;
    return maxlen;
}

int main()
{
    int arr[] = {1, 7, 10, 6, 1, 2, 2, 2, 4, 2, 3};
    int size = sizeof(arr) / sizeof(int);
    int k = 10;
    cout << "length: " << maxlength(arr, size, k);
}
