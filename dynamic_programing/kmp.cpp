#include <iostream>
using namespace std;

string presentAt(string a, string pat)
{
    string s = "";
    int j = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == pat[j])
        {
            j++;
        }
        else if (i >= 1)
        {
            i--;
            j = 0;
        }

        if (j == pat.size())
        {
            s += to_string(i - pat.size() + 1) + " ";
            j = 0;
        }
    }
    return s;
}

int *makeTable(string pat)
{
    int *arr = new int[pat.size()];
    int j = 0;
    arr[0] = 0;
    for (int i = 1; i < pat.size(); i++)
    {
        if (pat[i] == pat[j])
        {
            arr[i] = arr[i - 1] + 1;
            j++;
        }
        else
        {
            arr[i] = 0;
        }
    }
    return arr;
}

string linerarMatch(string s, string pat)
{
    int *arr = makeTable(pat);
    string ss = "";
    int x = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == pat[x])
        {
            x++;
        }
        else if (x >= 1 && i >= 1)
        {
            x = arr[x - 1];
            i--;
        }
        else
        {
            x = 0;
            i = 0;
        }

        if (x == pat.size())
        {
            ss += to_string(i - pat.size() + 1) + " ";
            x = arr[x - 1];
        }
    }
    return ss;
}

int main()
{
    string a = "sdgfdgdgdgfd";
    string pat = "dgf";
    //cout << presentAt(a, pat);    //n*k
    cout << linerarMatch(a, pat); //n+k
    return 0;
}