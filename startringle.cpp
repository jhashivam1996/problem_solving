// C++ code to demonstrate star pattern
#include <iostream>
using namespace std;

// Function to demonstrate printing pattern
void triangle(int n)
{
	int k = 0;
	for (int i=n; i>=0; i--)
	{
		for (int j=k; j>0; j--)
			cout <<" ";
		k = k + 1;
		for (int j=i; j>=0; j-- )
            cout << "* ";
		cout << endl;
	}
}
void triangler(int n)
{
	int k = n;
	for (int i=0; i<=n; i++)
	{
		for (int j=0; j<k; j++)
			cout <<" ";
		k = k-1;
		for (int j=0; j<=i;j++)
            cout << "* ";
		cout << endl;
	}
}


int main()
{
	int n = 10;
	triangle(n);
	cout<<endl;
	triangler(n);
	return 0;
}
