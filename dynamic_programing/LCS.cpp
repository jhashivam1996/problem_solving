#include <iostream>
#include <cstring>
using namespace std;
int dpM[10][10];

int lcs1(string s1, string s2, int i, int j)
{
    if (dpM[i][j] != -1)
    {
        return dpM[i][j];
    }
    if (s1[i] == '\0' || s2[j] == '\0')
    {
        return 0;
    }
    int ans = 0;
    if (s1[i] == s2[j])
    {
        ans = lcs1(s1, s2, i + 1, j + 1) + 1;
    }
    else
    {
        ans = max(lcs1(s1, s2, i + 1, j), lcs1(s1, s2, i, j + 1));
    }
    return dpM[i][j] = ans;
}

int lcs(string X, string Y, int m, int n)
{
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (X[i - 1] == Y[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[m][n];
}
int main()
{
    string s1 = "abcdaf";
    string s2 = "acbcf";
    memset(dpM, -1, sizeof(dpM));
    cout << lcs(s1, s2, s1.size(), s2.size()) << endl;
    cout << lcs1(s1, s2, 0, 0);
}