#include <stdio.h>

void stringReverse(char strArray[]);

int main()
{
	char strArray[30] = "Printf this string backward.";
	
	for (int n = 0; strArray[n]; n++)
		printf("%c", strArray[n]);

	printf("\n");

	stringReverse(strArray);

	return 0;
}

void stringReverse(char strArray[])
{
	int n;

	for (n = 0; strArray[n]; n++);

	for (n = n-1; n >= 0; n--)
		printf("%c", strArray[n]);

}
