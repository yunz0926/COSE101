#include <stdio.h>

void concatenates(char *string1[], const char *string2[]);

int main()
{
	char string1[80];
	char string2[80];

	printf("Enter two strings: ");

	scanf_s("%s%s", string1, 80, string2, 80);

	concatenates(string1, string2);
	
	for (int i = 0; string1[i]; i++)
		printf("%c", string1[i]);
}

void concatenates(char *string1, const char *string2)
{
	int i;
	for (i = 0; *string1; string1++);

	while (*string1 = *string2)
	{
		string1++;
		string2++;
	}

}