#include <iostream>
using namespace std;

void main(int argc, int argv[])
{
    if (argc < 2)
    {
        cout << "enter some value in cmd line";
        return;
    }
    for (int i = 1; i < argc; i++)
    {
        cout << atoi(argv[i]);
    }
}