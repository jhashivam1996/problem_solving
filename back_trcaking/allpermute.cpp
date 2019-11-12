#include <iostream>
#include <algorithm>
using namespace std;

void swap(string &s, int i, int j)
{
	char ch = s[i];
	s[i] = s[j];
	s[j] = ch;
}

void permutebySTL(string s)
{
	sort(s.begin(), s.end());
	do
	{
		cout << s << endl;
	} while (next_permutation(s.begin(), s.end()));
}

void permute(string s, int start, int end)
{
	if (start == end)
	{
		cout << s << endl;
	}
	else
	{
		for (int i = start; i < end; i++)
		{
			swap(s, start, i);
			permute(s, start + 1, end);
			//swap(s,start,i);
		}
	}
}

int main()
{
	string s = "abc";
	//permute(s,0,s.size());
	cout << endl;
	permutebySTL(s);
}