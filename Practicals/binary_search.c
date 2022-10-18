#include <stdio.h>

int binary_search(int A[10], int tar, int l, int u)
{
	int mid = (l + u) / 2;

	if (A[mid] == tar)
	{
		return mid;
	}

	if (tar < A[mid])
	{
		u = mid - 1;
		return binary_search(A, tar, l, u);
	}

	if (A[mid] < tar)
	{
		l = mid;
		return binary_search(A, tar, l, u);
	}
}


void run_binary_search()
{
	int Arr[10];
	int ele = 0;
	int low = 0;
	int upp = 9;
	int idx = -1;

	printf("Enter the array of 10 elements:\n");

	for (int i = 0; i < 10; i++)
	{
		printf("Enter the element %d:", i + 1);
		scanf("%d", &Arr[i]);
	}

	printf("Enter the target element:");
	scanf("%d", &ele);

	idx = binary_search(Arr, ele, low, upp);

	if (idx != -1)
	{
		printf("Element found at index %d", idx);
	}

	else if(idx == -1)
	{
		printf("Element not found!");
	}
}