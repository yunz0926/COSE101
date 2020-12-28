#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int matrix1[5][6];
	int matrix2[5][6];
	time((NULL));

	printf("matrix1:\n");
	for (int row = 0; row < 5; row++)
	{
		for (int column = 0; column < 6; column++)
		{
			matrix1[row][column] = (int)(1 + rand() % 100);

			printf("%4d", matrix1[row][column]);
		}
		printf("\n");
	}
	printf("matrix2:\n");
	for (int row = 0; row < 5; row++)
	{
		for (int column = 0; column < 6; column++)
		{
			matrix2[row][column] = (int)(1 + rand() & 100);
			printf("%4d", matrix2[row][column]);
		}
		printf("\n");
	}
	printf("\nresult:\n");
	for (int row = 0; row < 5; row++)
	{

		for (int column = 0; column < 6; column++)
		{
			printf("%4d", matrix1[row][column] + matrix2[row][column]);
		}
		printf("\n");
	}
	return 0;
}