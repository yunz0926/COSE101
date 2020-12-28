#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct student{
	char name[80];
	int stdnum;
	float avg;
	int kor;
	int math;
	int eng;
}Student;

typedef struct store {
	char arr[300];
}Store;

void main()
{
	Student list[5];
	Store storage;
	FILE *fp1, *fp2;
	char *ptr;

	printf("Name\t\tID\tAvg\t\tKOR\tMATH\tENG\n");
	
	fp1 = fopen("stdlist.txt", "rb");
	fp2 = fopen("resultlist.txt", "w");

	fread((void*)&storage, sizeof(storage), 1, fp1);
	ptr = strtok(storage.arr, " \t\n");



	for (int i = 0; i < 5; i++)
	{
		while (ptr != NULL)
		{
			strcpy(list[i].name, ptr);
			list[i].stdnum = atoi(ptr = strtok(NULL, " \t"));
			list[i].avg = atof(ptr = strtok(NULL, " \t"));
			list[i].kor = atoi(ptr = strtok(NULL, " \t"));
			list[i].math = atoi(ptr = strtok(NULL, " \t"));
			list[i].eng = atoi(ptr = strtok(NULL, " \t\n"));

			ptr = strtok(NULL, " \t\n");

			break;
		}
		
		
	}
		
	fclose(fp1);

	for (int i = 0; i < 5; i++)
	{
		printf("%s\t%d\t%f\t%d\t%d\t%d\n", list[i].name, list[i].stdnum, list[i].avg, list[i].kor, list[i].math, list[i].eng);

	}

	Student temp;

	for (int i = 4; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (list[j].avg < list[j + 1].avg)
			{
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}

		}
	}

	printf("\n\nName\t\tID\tAvg\t\tKOR\tMATH\tENG\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%s\t%d\t%f\t%d\t%d\t%d\n", list[i].name, list[i].stdnum, list[i].avg, list[i].kor, list[i].math, list[i].eng);

	}

	for (int i = 0; i < 5; i++)
	{
		fprintf(fp2, "%s\t\t%d\t%f\t%d\t%d\t%d\n", list[i].name, list[i].stdnum, list[i].avg, list[i].kor, list[i].math, list[i].eng);
	}

	fclose(fp2);
}