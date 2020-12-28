#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ulcase(char input);

int main()
{
	printf("Enter the character: ");
	char input;
	scanf("%c", &input);

	printf("%c: %s", input, ulcase(input) ? "Uppercase" : "Lowercase");

	return 0;
}

int ulcase(char input)
{
	if (input >= 'A' && input <= 'Z')
		return 1;
	
	if (input >= 'a' && input <= 'z')
		return 0;
}