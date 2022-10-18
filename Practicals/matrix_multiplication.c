#include <stdio.h>

void run_matrix_multiplication()
{
	int A[20][20];
	int B[20][20];
	int C[20][20];
	int r1 = 0;
	int c1 = 0;
	int r2 = 0;
	int c2 = 0;

	printf("Enter the matrix A:\n");
	printf("Enter the number of rows of matrix A:");
	scanf("%d", &r1);
	printf("Enter the number of columns of matrix A:");
	scanf("%d", &c1);

	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c1; j++)
		{
			printf("Enter the element (%d, %d):", (i + 1), (j + 1));
			scanf("%d", &A[i][j]);
		}
	}

	printf("Enter the matrix B:\n");
	printf("Enter the number of rows of matrix B:");
	scanf("%d", &r2);
	printf("Enter the number of columns of matrix B:");
	scanf("%d", &c2);

	for (int i = 0; i < r2; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			printf("Enter the element (%d, %d):", (i + 1), (j + 1));
			scanf("%d", &B[i][j]);
		}
	}

	if (r2 == c1)
	{
		for (int i = 0; i < r1; i++)
		{
			for (int j = 0; j < c2; j++)
			{
				C[i][j] = 0;
				for (int k = 0; k < c2; k++)
				{
					C[i][j] = C[i][j] + A[i][k] * B[k][j];
				}
			}
		}

		printf("Result matrix:\n");

		for (int i = 0; i < r1; i++)
		{
			for (int j = 0; j < c2; j++)
			{
				printf("%d\t", C[i][j]);
			}

			printf("\n");
		}
	}

	if (r2 != c1)
	{
		printf("Matrices are not conformable :-(");
	}
}