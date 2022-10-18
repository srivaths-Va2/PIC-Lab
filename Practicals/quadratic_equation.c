#include <stdio.h>
#include <math.h>

void run_quadratic_equation()
{
	int a = 0;
	int b = 0;
	int c = 0;
	float disc = 0;

	printf("Enter the coefficient of x^2:");
	scanf("%d", &a);
	printf("Enter the coefficient of x:");
	scanf("%d", &b);
	printf("Enter the constant:");
	scanf("%d", &c);

	disc = pow(b, 2) - (4 * a * c);

	if (disc >= 0)
	{
		float r1 = 0;
		float r2 = 0;

		r1 = ((-1 * b) + pow(disc, 0.5)) / (2 * a);
		r2 = ((-1 * b) - pow(disc, 0.5)) / (2 * a);

		printf("Roots are %f and %f", r1, r2);
	}

	else
	{
		printf("Imaginary roots exist!\n");

		float r1 = 0;
		float r2 = 0;
		float i1 = 0;
		float i2 = 0;

		r1 = (-1 * b) / (2 * a);
		r2 = (-1 * b) / (2 * a);

		i1 = pow((-1 * disc), 0.5) / (2 * a);
		i2 = -1 * i1;

		printf("Root1:\n");
		printf("Real part of root = %f\n", r1);
		printf("Imaginary part of root = %f\n", i2);
		printf("Root 2:\n");
		printf("Real part of root = %f\n", r2);
		printf("Imaginary part of root = %f\n", i2);
	}
}