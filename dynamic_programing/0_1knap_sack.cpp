#include <iostream>
#include <array>
#include <cstring>
using namespace std;

int maxProfit(array<int, 5> shop, array<int, 5> price, int n, int bag_cap, int dp[][10])
{
    if (dp[n][bag_cap] != -1)
    {
        return dp[n][bag_cap];
    }
    if (n == 0 || bag_cap == 0)
    {
        return 0;
    }
    int pick = 0;
    int do_not_pick = 0;
    if (shop[n - 1] <= bag_cap)
    {
        pick = price[n - 1] + maxProfit(shop, price, n - 1, bag_cap - shop[n - 1], dp);
    }
    do_not_pick = 0 + maxProfit(shop, price, n - 1, bag_cap, dp);
    return dp[n][bag_cap] = max(pick, do_not_pick);
}

int main()
{
    int dp[10][10];
    memset(dp, -1, sizeof(dp));
    array<int, 5> weights = {4, 7, 1, 2, 6};
    array<int, 5> price = {20, 10, 20, 5, 15};
    int bag_cap = 15;
    cout << maxProfit(weights, price, 5, bag_cap, dp);
    return 0;
}