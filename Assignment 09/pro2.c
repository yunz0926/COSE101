#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
	char name[20];
	int studentID;
	int grade;
	char major[20];
}Student;

int main()
{
	Student student;
	Student std[5];
	FILE *fp1, *fp2;
	int findID;

	if (fopen_s(&fp1, "student_file.txt", "w") != NULL)
	{
		printf("file open error!\n");
		return -1;
	}
		


	for (int i = 0; i < 5; i++)
	{
		printf("Name Student_number Grade Major: ");
		scanf("%s %d %d %s", student.name, &student.studentID, &student.grade, student.major);
		fprintf(fp1, "%s %d %d %s\n", student.name, student.studentID, student.grade, student.major);
	}
	fclose(fp1);

	printf("Insert the student number to find: ");
	scanf("%d", &findID);

	fp2 = fopen("student_file.txt", "r");
	for (int i = 0; i < 5; i++)
	{
		fscanf(fp2, "%s %d %d %s", std[i].name, &std[i].studentID, &std[i].grade, std[i].major);
		if (findID == std[i].studentID)
		{
			printf("The major of student with ID %d is %s", std[i].studentID, std[i].major);
			break;
		}
	}
	fclose(fp2);



}