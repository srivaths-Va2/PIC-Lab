#include <stdio.h>
#include <string.h>

int check_palindrome(char w[30])
{
	int len = 0;
	int fl = 0;

	len = strlen(w);
	
	for (int i = 0; i < len; i++)
	{
		if (w[i] == w[len - i - 1])
		{
			fl = 1;
		}

		else
		{
			fl = 0;
			break;
		}
	}

	return fl;
}

void run_check_palindrome()
{
	char word[30];
	int flag = 0;

	printf("Enter the word:");
	scanf("%s", word);

	flag = check_palindrome(word);

	if (flag == 1)
	{
		printf("Word is a palindrome!");
	}

	else
	{
		printf("Word is not a palindrome!");
	}
}