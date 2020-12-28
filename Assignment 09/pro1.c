#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	char s1[20];
	char s2[20];
	char buffer[80];
	FILE *fp1, *fp2;

	printf("Enter the name of file to read: ");
	scanf("%s", s1);

	fp1 = fopen(s1, "r");
	if (fp1 == NULL)
		printf("File %s read error!\n", s1);

	printf("Enter the name of file to write: ");
	scanf("%s", s2);

	fp2 = fopen(s2, "w");

	while (fgets(buffer, 100, fp1) != NULL)
	{
		if (*buffer != '\n')
			fputs(buffer, fp2);
	}

	fclose(fp1);
	fclose(fp2);
	printf("Copy txt complete!");






}