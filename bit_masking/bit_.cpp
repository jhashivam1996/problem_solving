#include <iostream>
using namespace std;

int getithBit(int num, int i)
{
    return num & (1 << i) ? 1 : 0;
}
void setithBit(int &num, int i)
{
    num = num | (1 << i);
}
void clearBit(int &num, int i)
{
    num = num & (~(1 << i));
}

int countSetBits(int num)
{
    int count = 0;
    while (num > 0)
    {
        if (num & 1)
        {
            count++;
        }
        num = num >> 1;
    }
    return count;
}
int countsetBitFast(int num)
{
    int count = 0;
    while (num)
    {
        count++;
        num = num & (num - 1);
    }
    return count;
}

int main()
{
    int num = 5;
    cout << countSetBits(num) << endl;
    cout << getithBit(num, 1) << endl;
    setithBit(num, 1);
    cout << countSetBits(num) << endl;
    cout << getithBit(num, 1);
    clearBit(num, 1);
    cout << endl
         << getithBit(num, 1);
    cout << endl
         << countsetBitFast(num);
}