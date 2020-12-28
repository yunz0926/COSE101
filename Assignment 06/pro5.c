#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char text[3][80];
	char word[40][20];
	int occurence[40] = { 0, };

	printf("Enter three lines of text:\n");

	for (int i = 0; i < 3; i++)
		gets(&text[i][0]);

	int j = 1;

	for (int i = 0; i < 3; i++)
	{
		char *ptr = strtok(&text[i][0], ". \n");
		

		while (ptr != NULL)
		{

			for (int k = 0; k < j; k++)
			{
				if (strcmp(&word[k][0], ptr) == 0)
				{
					++occurence[k];
					break;
				}
				else
				{
					if (k == j - 1)
					{
						strcpy(&word[j][0], ptr);
						++occurence[j];
						j++;
						break;
					}
				}

			}
			ptr = strtok(NULL, ". \n");
		}


	}
	printf("\n\n");

	for (int i = 1; i < j; i++)
	{
		printf("\"%s\" appeared %d %s\n", &word[i][0], occurence[i],occurence[i]==1?"time" : "times");
	}

	return 0;

}