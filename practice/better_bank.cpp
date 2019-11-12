
#include <bits/stdc++.h>
int main()
{
    double p, s, sum, emi, bank[5], sq;
    int y, n, k, i, yrs, l = 0;
    scanf("%lf", &p);
    scanf("%d", &y);
    for (k = 0; k < 2; k++)
    {
        scanf("%d", &n);
        sum = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &yrs);
            scanf("%lf", &s);

            sq = pow((1 + s), yrs * 12);
            emi = (p * (s)) / (1 - 1 / sq);
            sum = sum + emi;
        }
        bank[l++] = sum;
    }
    if (bank[0] < bank[1])
        printf("Bank A");

    else
        printf("Bank B");
    return 0;
}