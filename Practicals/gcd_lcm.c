#include <stdio.h>

int gcd(int n1, int n2)
{
	if (n2 == 0)
	{
		return n1;
	}

	else
	{
		return gcd(n2, n1 % n2);
	}
}

void run_gcd_lcm()
{
	int num1 = 0;
	int num2 = 0;
	int hcf = 0;
	int lcm = 0;

	printf("Enter the number 1:");
	scanf("%d", &num1);
	printf("Enter the number 2:");
	scanf("%d", &num2);

	if (num1 >= num2)
	{
		hcf = gcd(num1, num2);
		lcm = (num1 * num2) / hcf;
		printf("HCF = %d\n", hcf);
		printf("LCM = %d", lcm);
	}

	if (num1 < num2)
	{
		hcf = gcd(num2, num1);
		lcm = (num1 * num2) / hcf;
		printf("HCF = %d\n", hcf);
		printf("LCM = %d", lcm);
	}
}