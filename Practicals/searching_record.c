#include <stdio.h>

void run_searching_record()
{
	struct student_info
	{
		char name[30];
		int roll;
		int test_scores[3];
	};

	struct student_info s[20];
	int n = 0;
	int roll_no = 0;
	int idx = -1;

	printf("Enter the number of students in the database:");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("Enter the name of student %d:", i + 1);
		scanf("%s", s[i].name);
		printf("Enter the roll number of student %d:", i + 1);
		scanf("%d", &s[i].roll);
		printf("Enter mathematics marks:");
		scanf("%d", &s[i].test_scores[0]);
		printf("Enter physics marks:");
		scanf("%d", &s[i].test_scores[1]);
		printf("Enter chemistry marks:");
		scanf("%d", &s[i].test_scores[2]);
		printf("******************************************************************************\n");
	}

	printf("Enter the roll number of record to search:");
	scanf("%d", &roll_no);

	for (int i = 0; i < n; i++)
	{
		if (s[i].roll == roll_no)
		{
			idx = i;
			break;
		}
	}

	if (idx != -1)
	{
		printf("Printing student details.....\n");
		printf("Student name : %s\n", s[idx].name);
		printf("Student roll number : %d\n", s[idx].roll);
		printf("Mathematics Marks : %d\n", s[idx].test_scores[0]);
		printf("Physics Marks : %d\n", s[idx].test_scores[1]);
		printf("Chemistry Marks : %d\n", s[idx].test_scores[2]);
	}

	else if (idx == -1)
	{
		printf("Student not found in database !!");
	}
}