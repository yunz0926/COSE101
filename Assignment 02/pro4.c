#include <stdio.h>

int main()
{
	for (int i = 0; i < 9; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < 9; j++)
			{
				if (j <= 4 + i / 2 && j >= 4 - i / 2)
					printf("*");
				else
					printf(" ");
			}
			printf("\n\n");
		}
	
	}
	for (int i = 7; i >= 0; i--)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < 9; j++)
			{
				if (j <= 4 + i / 2 && j >= 4 - i / 2)
					printf("*");
				else
					printf(" ");
			}
			printf("\n\n");
		}
	}
	return 0;
}