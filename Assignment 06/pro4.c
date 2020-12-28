#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char string[10][20];
	for (int i = 0; i < 10; i++)
	{
		printf("Enter a string: ");
		gets(&string[i][0]);
	}

	int i = 9;

	while (1)
	{
		for (int j = 0; j < i; j++)
		{
			int number = strcmp(&string[j][0], &string[j + 1][0]);
			if (number == 1)
			{
				char copy[20] = { 0, };
				strcpy(copy, &string[j][0]);
				strcpy(&string[j][0], &string[j + 1][0]);
				strcpy(&string[j + 1][0], copy);
			}
		}
		--i;
		if (i == 0)
			break;
	}
	printf("\nThe strings in sorted order are:\n");
	
	for (int i = 0; i < 10; i++)
		printf("%s\n", &string[i][0]);

	return 0;
}