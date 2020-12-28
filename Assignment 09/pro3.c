#include <stdio.h>

void main()
{
	FILE *fp1, *fp2, *fp3;

	int input1[2][3];
	int input2[2][3];
	int result[2][3];

	if (fopen_s(&fp1, "input1.txt", "rt") != 0)
		printf("File could not be opened.\n");
	if (fopen_s(&fp2, "input2.txt", "rt") != 0)
		printf("File could not be opend.\n");
	if (fopen_s(&fp3, "result.txt", "wt") != 0)
		printf("File could not be opened\n");

	printf("input1 matrix:\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			fscanf_s(fp1, "%d", &input1[i][j]);
			printf("%2d\t", input1[i][j]);
		}
		printf("\n");
			
	}
	printf("\ninput2 matrix:\n");
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			fscanf_s(fp2, "%2d", &input2[i][j]);
			printf("%2d\t", input2[i][j]);
		}
		printf("\n");
			
	}
	printf("\nresult matrix:\n");

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			result[i][j] = input1[i][j] + input2[i][j];
			fprintf(fp3, "%d\t", result[i][j]);
			printf("%2d\t", result[i][j]);
		}
		printf("\n");
	}

	fclose(fp1);
	fclose(fp2);
	fclose(fp3);

}