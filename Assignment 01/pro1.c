#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("Enter two integers : ");
	
	int num1, num2, start, end;
	scanf("%d %d", &num1, &num2);

	if (num1 < num2)
	{
		start = num1;
		end = num2;
	}
	else
	{
		start = num2;
		end = num1;
	}

	int sum = 0;

	while (start <= end)
	{
		sum += start;
		start++;
	}
	printf("The sum of all integer between %d and %d is %d\n", num1, num2, sum);

	return 0;
}