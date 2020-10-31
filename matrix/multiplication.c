#include <stdio.h>

int main()
{
	int a[2][2], b[2][2], c[3][3], i, j, k, sum;

	printf("\nEnter 4 numbers for 1st matrix:\n");

	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("\nEnter 4 numbers for 2nd matrix:");
	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}

	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			sum = 0;
			for (k = 0; k <= 1; k++)
			{
				sum = sum + a[i][k] * b[k][j];
			}
			c[i][j] = sum;
		}
	}

	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}

	return 0;
}
