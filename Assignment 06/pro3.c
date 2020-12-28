#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	printf("Enter three lines of text: \n");

	char text[3][80];
	char length[15] = { 0, };

	for (int i = 0; i < 3; i++)
		gets(&text[i][0]);

	for (int i = 0; i < 3; i++)
	{
		char *ptr = strtok(&text[i][0], ". \n");

		while (ptr != NULL)
		{
			int leng;
			leng = strlen(ptr);
			++length[leng];

			ptr = strtok(NULL, ". \n");
		}
	}

	printf("\n");
	for (int i = 0; i < 15; i++)
	{
		if (length[i] != 0)
		{
			printf("%d %s of length %d\n", length[i],length[i]==1?"word" : "words", i);
		}
	}

	return 0;
}