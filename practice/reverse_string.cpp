#include <iostream>
#include <cstring>
using namespace std;

void rev(char *a, int i)
{
    if (a[i] == '\0')
    {
        return;
    }
    rev(a, i + 1);
    cout << a[i];
}

int main()
{
    char atr[] = "abcd";
    rev(atr, 0);

    return 0;
}