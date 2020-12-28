#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("Enter the base number: ");
	int base;
	scanf("%d", &base);

	while (base < 0)
	{
		printf("Enter the base number: ");
		scanf("%d", &base);
	}
	
	printf("Enter the exponent number: ");
	int exponent;
	scanf("%d", &exponent);

	while (exponent < 0)
	{
		printf("Enter the exponent number: ");
		scanf("%d", &exponent);
	}

	if (exponent == 0)
		printf("%d^%d is 1", base, exponent);
	else
	{
		int result = base;
		int num = 1;
		while (num < exponent)
		{
			result *= base;
			num++;
		}
		printf("%d^%d is %d", base, exponent, result);
	}
	return 0;
}