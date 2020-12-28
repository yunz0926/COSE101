#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inverse(int *arr, int *inver);
void main()
{
	int array[10];
	int inver[10];

	for (int i = 0; i < 10; i++)
	{
		array[i] = rand() % 100;
		printf("%d ", array[i]);
	}

	printf("\n");

	inverse(array, inver);

	for (int i = 0; i < 10; i++)
		printf("%d ", inver[i]);
}

void inverse(int *arr, int *inver)
{
	for (int i = 0; i < 9; i++)
		arr++;
		
	for (int i = 0; i < 10; i++)
	{
		*inver = *arr;
		inver++;
		arr--;
	}


}