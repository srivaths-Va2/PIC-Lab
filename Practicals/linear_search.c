#include <stdio.h>

int linear_search(int A[20], int tar, int n)
{
	int pos = -1;

	for (int i = 0; i < n; i++)
	{
		if (A[i] == tar)
		{
			pos = i;
			break;
		}
	}

	return pos;
}

void run_linear_search()
{
	int Arr[20];
	int ele = 0;
	int num = 0;
	int idx = 0;

	printf("Enter the number of elements of the array:");
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("Enter the element %d:", (i + 1));
		scanf("%d", &Arr[i]);
	}

	printf("Enter the target element:");
	scanf("%d", &ele);

	idx = linear_search(Arr, ele, num);

	if (idx == -1)
	{
		printf("Element not found!");
	}

	else
	{
		printf("Element found at index %d", idx);
	}
}