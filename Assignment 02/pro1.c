#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("Enter the number: ");
	int num;
	scanf("%d", &num);
	int largest = num;
	int i = 0;
	do
	{
		printf("Enter the number: ");
		scanf("%d", &num);
		
		if (num > largest)
			largest = num;

		i++;
	} while (i < 4);

	printf("Largest is %d\n", largest);

	return 0;
	
}