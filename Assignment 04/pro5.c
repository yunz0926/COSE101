#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int matrix[5][5];


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			matrix[i][j] = rand() % 10;
	}

	int sum = 0;
	int largest = 0;
	int smallest = (int)(matrix[0][0]) + (int)(matrix[1][0]) + (int)(matrix[1][0]) + (int)(matrix[1][1]);
	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;

	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			sum = (int)(matrix[i][j]) + (int)(matrix[i][j+1]) + (int)(matrix[i+1][j]) + (int)(matrix[i+1][j+1]);
			if (sum > largest)
			{
				largest = sum;
				x1 = i;
				y1 = j;
			}
			if (sum < smallest)
			{
				smallest = sum;
				x2 = i;
				y2 = j;
			}

			
		}
	}
	printf("Matrix\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			printf("%d     ", matrix[i][j]);

		printf("\n");
	}
	printf("The largest square value : %d (%d,%d)\n", largest, x1, y1);
	printf("The smallest square value : %d (%d,%d)\n", smallest, x2, y2);

	return 0;
}