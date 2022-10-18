#include <stdio.h>

void selection_sort(int A[20], int n)
{
	int temp = 0;
	int idx = 0;

	for (int i = 0; i < n; i++)
	{
		idx = i;

		for (int j = i + 1; j < n; j++)
		{
			if (A[idx] > A[j])
			{
				temp = A[idx];
				A[idx] = A[j];
				A[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d\t", A[i]);
	}
}

void run_selection_sort()
{
	int Arr[20];
	int num = 0;

	printf("Enter the number of elements in the array:");
	scanf("%d", &num);
	
	for (int i = 0; i < num; i++)
	{
		printf("Enter the element %d:", (i + 1));
		scanf("%d", &Arr[i]);
	}

	printf("Sorted Array is:\n");

	selection_sort(Arr, num);
}