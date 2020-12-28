#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char text[3][80];
	char character[26] = { 0, };
	printf("Enter three lines of text: \n");

	for (int i = 0; i < 3; i++)
		gets(&text[i][0]);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			char* ptr=&text[i][0];
			do
			{
				ptr = strchr(ptr, 'a' + j);
				if (ptr != NULL) {
					++character[j];
					ptr++;
				}
			} while (ptr != NULL);

		}

	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			char* ptr=&text[i][0];
			do
			{
				ptr = strchr(ptr, 'A' + j);
				if (ptr != NULL) {
					++character[j];
					ptr++;
				}
			} while (ptr != NULL);

		}

	}
	printf("\nThe total occurrences of each character:\n");

	for (int i = 0; i < 26; i++)
	{
		printf("%c: %3d\n", 'a' + i, character[i]);
	}

	return 0;
}