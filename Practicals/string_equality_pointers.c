#include <stdio.h>
#include <string.h>

int check_strings_equal(char* x1, char* x2, int l)
{
	int fl = 1;

	for (int i = 0; i < l; i++)
	{
		if (*(x1 + i) != *(x2 + i))
		{
			fl = 0;
			break;
		}

		else
		{
			fl = 1;
		}
	}

	return fl;
}

void run_string_equality_pointers()
{
	char w1[50];
	char w2[50];
	char* p1;
	char* p2;
	int len1 = 0;
	int len2 = 0;

	printf("Enter the word 1:");
	scanf("%s", w1);
	printf("Enter the word 2:");
	scanf("%s", w2);

	len1 = strlen(w1);
	len2 = strlen(w2);

	if (len1 != len2)
	{
		printf("Strings are not equal!");
	}

	else
	{
		p1 = &w1[0];
		p2 = &w2[0];

		int flag = check_strings_equal(p1, p2, len1);

		if (flag == 1)
		{
			printf("Strings are equal!");
		}

		else
		{
			printf("Strings are not equal!");
		}
	}
}