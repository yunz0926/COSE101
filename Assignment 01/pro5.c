#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("Input the number : ");

	int num;
	scanf("%d", &num);

	int sum = 0;
	int largest = num;
	int smallest = num;
	int odd = 0;
	int even = 0;
	int negative = 0;

	while (num != 0)
	{
		sum += num;

		if (largest < num)
			largest = num;
		if (smallest > num)
			smallest = num;
		if (num < 0)
			negative++;
		if (num % 2 == 0 && num > 0)
			even++;
		if (num % 2 == 1)
			odd++;

		printf("Input the number : ");
		scanf("%d", &num);

	}

	printf("-----------------------------------\n");
	printf("Sum :%d\nLargest :%d\nSmallest :%d\nOdd number count :%d\nEven number count :%d\nNegative number count :%d\n", sum, largest, smallest, odd, even, negative);

	return 0;

}




