#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("Enter a positive integer: ");
	
	int integer;
	scanf("%d", &integer);

	while (integer < 0)
	{
		printf("Enter a positive integer: ");
		scanf("%d", &integer);
	}

	int fac = 1;
	int num = integer;

	while (num > 0)
	{
		fac *= num;
		num--;
	}
	
	printf("%d! is %d\n", integer, fac);

	return 0;
}