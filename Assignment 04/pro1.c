#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int array[20];
	printf("Nonrepetitive array values are:\n");

	srand(time(NULL));
	int n = 0;

	while (1)
	{
		array[n] = rand() % 20 + 1;

		for (int i = 0; i < n; i++)
		{
			if (array[n] == array[i])
				return 0;
		}
		printf("Array[ %d ] = %d\n", n, array[n]);

		n++;

	}
	return 0;
}