#include <stdio.h>

void perfect(int number);

int main()
{
	printf("For the integers from 1 to 1000:\n");

	for (int number = 2; number < 1000; number++)
	{
	
		int sum = 1;

		for (int j = 2; j <= number / 2; j++)
		{
			if (number % j == 0)
				sum += j;
		}

		if (number == sum)
			perfect(number);
		else
			perfect(0);
	}
	return 0;
}

void perfect(int number)
{
	if ( number > 0)
		printf("%d is perfect\n", number);
}