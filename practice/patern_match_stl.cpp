#include <bits/stdc++.h>
using namespace std;

void printOcurrence(string text, string pat)
{
    int found = text.find(pat);
    while (found != string::npos)
    {
        cout << found << " ";
        found = text.find(pat, found + 1);
    }
}

int main()
{
    string text = "aadsskaass";
    string pat = "ss";
    printOcurrence(text, pat);
}