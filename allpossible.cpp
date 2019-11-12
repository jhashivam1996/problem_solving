#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int x = 1;
string swapv(string s, int i, int j)
{
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    return s;
}
void writeFile(string s)
{
    ofstream file("permute.txt", ios::app);
    file << x << " " << s << endl;
    file.close();
}
void permuteString(string s, int start, int endd)
{
    if (start == endd)
    {
        //writeFile(s);
        cout << x << " " << s << endl;
        x++;
    }
    else
        for (int i = start; i < endd; i++)
        {
            s = swapv(s, start, i);
            permuteString(s, start + 1, endd);
            s = swapv(s, start, i);
        }
}
void readFile()
{
    string line;
    ifstream myf("permut.txt");
    while (getline(myf, line))
    {
        cout << line << endl;
    }
    myf.close();
}
main()
{
    string s = "abcde";
    permuteString(s, 0, s.size());
    //cout<<endl<<"reading file..........."<<endl;
    //readFile();
}
