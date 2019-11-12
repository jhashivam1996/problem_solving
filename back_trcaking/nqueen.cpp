#include <iostream>
#include <cstring>
#define N 25
using namespace std;

void printBoard(char board[][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

bool isSafe(char board[][N], int i, int j)
{
	for (int row = 0; row < i; row++)
	{
		if (board[row][j] == 'Q')
		{
			return false;
		}
	}
	int x = i;
	int y = j;
	while (x >= 0 && y >= 0)
	{
		if (board[x][y] == 'Q')
		{
			return false;
		}
		x--;
		y--;
	}
	x = i;
	y = j;
	while (x >= 0 && y < N)
	{
		if (board[x][y] == 'Q')
		{
			return false;
		}
		x--;
		y++;
	}
	return true;
}

bool canPlace(char board[][N], int row)
{
	if (row == N)
	{
		printBoard(board);
		return true;
	}
	for (int i = 0; i < N; i++)
	{
		if (isSafe(board, row, i))
		{
			board[row][i] = 'Q';
			if (canPlace(board, row + 1))
			{
				return true;
			}
			board[row][i] = '_'; //backtrack
		}
	}
	return false;
}

int main()
{
	char board[N][N];
	memset(board, '_', sizeof(board));
	if (!canPlace(board, 0))
	{
		cout << "Queen can not be placed";
	}
}