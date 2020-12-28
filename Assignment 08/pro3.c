#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char text[3][80];
	
	printf("Enter three lines of text:\n");

	for (int i = 0; i < 3; i++)
		gets(&text[i][0]);

	typedef struct {
		char word[20];
		int count;
		int isWritten;
	}wordutility;

	int i = 0;
	int j = 0;
	int count = 0;
	
	wordutility arr[20] = { 0, };

	char * ptr;

	for (int i = 0; i < 3; i++)
	{
		ptr = strtok(&text[i][0], " .\n");
		
		while (ptr)
		{
			for (j = 0; j < count; j++)
			{
				if (strcmp(&arr[j].word, ptr) == 0)
				{
					arr[j].count++;
					break;
				}
				
			}
			if (j == count)
				{
					strcpy(arr[j].word, ptr);
					arr[j].count++;
					arr[j].isWritten = 1;
					count++;
				}
			

			ptr = strtok(NULL, " .\n");
		}
	}

	printf("\n");

	for (int i = 0; i < count; i++)
		printf("\"%s\" appeard %d %s\n", arr[i].word, arr[i].count, arr[i].count == 1 ? "time" : "times");
}