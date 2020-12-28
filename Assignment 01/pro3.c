#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("Enter a 5-digit number: ");
	int num;
	scanf("%d", &num);

	int num1 = num / 10000;
	int num2 = (num % 10000) / 1000;
	int num3 = (num % 1000) / 100;
	int num4 = (num % 100) / 10;
	int num5 = num % 10;

	int seven = 0;
	if (num1 == 7)
		seven++;
	if (num2 == 7)
		seven++;
	if (num3 == 7)
		seven++;
	if (num4 == 7)
		seven++;
	if (num5 == 7)
		seven++;

	printf("The number %d has %d seven(s) in it", num, seven);

	return 0;
}