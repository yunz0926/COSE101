#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse(int number);

int main()
{
	printf("Enter a number between 1 and 9999: ");
	int number;
	scanf("%d", &number);

	reverse(number);

	return 0;
}

void reverse(int number)
{
	int reverse = 0;

	while (number > 1)
	{
		reverse *= 10;
		reverse += number % 10;
		number = number / 10;
	}

	printf("The number with its digits reversed is: %d", reverse);
	
}