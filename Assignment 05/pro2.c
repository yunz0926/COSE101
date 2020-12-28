#include <stdio.h>

int compare(char str1[], char str2[]);

void main()
{
	char string1[80];
	char string2[80];

	printf("Enter two strings: ");
	scanf_s("%s%s", string1,80, string2,80);

	int result = compare(string1, string2);

	if (result == 1)
		printf("%s and %s are equal.\n", string1, string2);
	else
		printf("%s and %s are not equal.\n", string1, string2);
}

int compare(const char str1[], const char str2[])
{
	int i;

	for (i = 0; str1[i]; i++)
	{
		if (str1[i] != str2[i])
			return 0;
	}

	if (str2[i] != '\0')
		return 0;

	return 1;
}