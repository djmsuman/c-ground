#include <stdio.h>

int main()
{
	int a[3][3], b[3][3], c[3][3], row, column;

	printf("Enter 9 numbers for 1st matrix:\n");

	for (row = 0; row <= 2; row++)
	{
		for (column = 0; column <= 2; column++)
		{
			scanf("%d", &a[row][column]);
		}
	}

	printf("Enter 9 numbers for 2 matrix:\n");

	for (row = 0; row <= 2; row++)
	{
		for (column = 0; column <= 2; column++)
		{
			scanf("%d", &b[row][column]);
		}
	}

	for (row = 0; row <= 2; row++)
	{
		for (column = 0; column <= 2; column++)
		{
			c[row][column] = a[row][column] + b[row][column];
			printf("%d ", c[row][column]);
		}

		printf("\n");
	}

	return 0;
}
