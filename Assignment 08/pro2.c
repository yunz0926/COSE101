#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	char name[80];
	int stdnum;
}student;

void bubblesort(student * arr);

void main()
{
	student arr[5] = { 0, };

	for (int i = 0; i < 5; i++)
	{
		char input[30];
		printf("<%d> Enter student name / student number: ", i + 1);
		gets(input);
		char * ptr = strtok(input, "/");
		strcpy(arr[i].name, ptr);
		ptr = strtok(NULL, "\n");
		arr[i].stdnum = atoi(ptr);

	}
	bubblesort(arr);
	
	printf("\nID\t\tName\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%10d\t%s\n", arr[i].stdnum, arr[i].name);
	}
}

void bubblesort(student * arr)
{
	for (int i = 4; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j].stdnum > arr[j + 1].stdnum)
			{
				student temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

