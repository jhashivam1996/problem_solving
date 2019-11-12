#include <iostream>
#include <cstring>
using namespace std;

void extractSequence(char *ch, int num)
{
    int i = 0;
    while (num > 0)
    {
        (num & 1) ? cout << ch[i] : cout << "";
        i++;
        num = num >> 1;
    }
    cout << endl;
}

void printAllsub(char *ar)
{
    int n = strlen(ar);
    int range = (1 << n) - 1;
    for (int i = 1; i <= range; i++)
    {
        extractSequence(ar, i);
    }
}

int main()
{
    char str[] = "123";
    printAllsub(str);
}