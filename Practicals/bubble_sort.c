#include <stdio.h>

void bubble_sort(int L[20], int n)
{
	int temp = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < (n - i - 1); j++)
		{
			if (L[j] > L[j + 1])
			{
				temp = L[j];
				L[j] = L[j + 1];
				L[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d\t", L[i]);
	}
}

void run_bubble_sort()
{
	int A[20];
	int num = 0;

	printf("Enter the number of elements in the array:");
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("Enter the element %d:", (i + 1));
		scanf("%d", &A[i]);
	}

	printf("Sorted array is:\n");

	bubble_sort(A, num);
}