
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int r = 3, c = 3, i, j, count;
	int **arr = (int **)malloc(r * sizeof(int *));
	for (i = 0; i < r; i++)
		arr[i] = (int *)malloc(c * sizeof(int));

	count = 0;
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			*(*(arr + i) + j) = ++count;

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
			printf("%d ", arr[i][j]);

		printf("\n");
	}

	/* for (int i = 0; i < r; i++)
	{
		free(arr[i]);
		free(arr);
	}

	printf("\n");
	printf("\n");

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
			printf("%d ", *(*(arr + i) + j));

		printf("\n");
	}
*/
	return 0;
}
