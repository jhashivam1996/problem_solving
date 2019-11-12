#include <iostream>
#include <cstring>
using namespace std;

int wayOfCoinChange(int *denominations, int amount)
{
    int combinations[amount + 1];
    memset(combinations, 0, sizeof(combinations));
    combinations[0] = 1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j < amount + 1; j++)
        {
            if (j >= denominations[i])
            {
                combinations[j] += combinations[j - denominations[i]];
            }
        }
    }
    return combinations[amount];
}

int main()
{
    int denominations[] = {1, 2, 5};
    cout << wayOfCoinChange(denominations, 5);
    return 0;
}