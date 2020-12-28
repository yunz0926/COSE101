#include <stdio.h>

void func(int *array)
{
	array[0]++;
	int temp = array[1];
	array[1] = array[2];
	array[2] *= temp;

}

void main()
{
	int array[3];
	printf("Enter three numbers: ");
	for (int i = 0; i < 3; i++)
	{
		int number;
		scanf_s("%d", &number);
		array[i] = number;
	}

	printf("Before: a = %d, b = %d, c = %d\n", array[0], array[1], array[2]);
	func(array);
	printf("After: a = %d, b = %d, c = %d\n", array[0], array[1], array[2]);

}
