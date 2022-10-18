#include <stdio.h>
#include <math.h>

int binary_to_decimal(int binum, int decnum, int i)
{
	if (binum == 0)
	{
		return decnum;
	}
	
	if (binum > 0)
	{
		int rem = 0;
		rem = binum % 10;
		binum = binum / 10;
		decnum = decnum + rem * pow(2, i);
		i = i + 1;
		return binary_to_decimal(binum, decnum, i);
	}
}

void run_binary_to_decimal()
{
	int binary_number = 0;
	int decimal_number = 0;
	int j = 0;

	printf("Enter the binary number:");
	scanf("%d", &binary_number);

	decimal_number = binary_to_decimal(binary_number, decimal_number, j);

	printf("Decimal number = %d", decimal_number);
}