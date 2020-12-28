#include <stdio.h>
#include <stdlib.h>

int main()
{
	char string[6];
	int sum = 0;

	for (int i = 0; i < 4; i++)
	{
		int number = 0;
		printf("Enter an integer string: ");
		scanf_s("%s", string, 6);
		sum += atoi(string);
		
	}
	printf("\nThe total of the values is %d\n", sum);

	return 0;
}





	

