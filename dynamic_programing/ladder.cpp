#include <iostream>
#include <cstring>

using namespace std;
int dp[50];
int ways(int steps, int jump)
{
    if (dp[steps] != 0)
    {
        return dp[steps];
    }
    if (steps == 1)
    {
        return 1;
    }
    if (steps < 0)
    {
        return 0;
    }
    int ans = 0;
    for (int i = 1; i <= jump; i++)
    {
        ans += ways(steps - i, jump);
    }
    return dp[steps] = ans;
}

int main()
{
    memset(dp, 0, sizeof(dp));
    int steps = 50;
    int jump = 30;
    cout << ways(steps, jump);
    return 0;
}