#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char text[3][80];
	
	printf("Enter three lines of text: \n");

	for (int i = 0; i < 3; i++)
		gets(&text[i][0]);

	typedef struct {
		int lowercount[26];
		int uppercount[26];
	}chcount;

	chcount arr[3] = { 0, };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			char* ptr = &text[i][0];
			do
			{
				ptr = strchr(ptr, 'a' + j);
				if (ptr != NULL) {
					arr[i].lowercount[j]++;
					ptr++;
				}
			} while (ptr != NULL);

		}

	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			char* ptr = &text[i][0];
			do
			{
				ptr = strchr(ptr, 'A' + j);
				if (ptr != NULL) {
					arr[i].uppercount[j]++;
					ptr++;
				}
			} while (ptr != NULL);

		}

	}

	printf("\nPrint Line\n\n0              1              2\n");
	
	for (int i = 0; i < 26; i++)
	{
		printf("%c : %d  %c : %d   %c : %d  %c : %d   %c : %d  %c : %d\n", 'a' + i, arr[0].lowercount[i], 'A' + i, arr[0].uppercount[i], 'a' + i, arr[1].lowercount[i], 'A' + i, arr[1].uppercount[i], 'a' + i, arr[2].lowercount[i], 'A' + i, arr[2].uppercount[i]);
	}

}