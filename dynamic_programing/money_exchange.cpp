#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
int dp[500];
int makeChange(int arr[], int amount)
{
    if (dp[amount] != -1)
    {
        return dp[amount];
    }
    if (amount == 0)
    {
        return 0;
    }
    int minChange = INT_MAX;
    for (int i = 0; i < 4; i++)
    {
        if (amount - arr[i] >= 0)
        {
            int yetToChange = makeChange(arr, amount - arr[i]) + 1;
            if (yetToChange != INT_MAX)
            {
                minChange = min(yetToChange, minChange);
            }
        }
    }
    return dp[amount] = minChange;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int currency[] = {1, 2, 5, 10};
    int change_amnt = 200;
    cout << "Minimum number of coins: " << makeChange(currency, change_amnt);
}