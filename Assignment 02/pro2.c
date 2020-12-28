#include <stdio.h>

int main()
{
	printf("Decimal\t\tBinary\n");
	for (int decimal = 0; decimal <= 15; decimal++)
	{
		printf("%d", decimal);

		int a, b, c, d;
		a = decimal % 2 ? 1 : 0;
		b = (decimal / 2) % 2 ? 1 : 0;
		c = (decimal / 2 / 2) % 2 ? 1 : 0;
		d = (decimal / 2 / 2 / 2) % 2 ? 1 : 0;
		printf("\t\t%d%d%d%d\n", d, c, b, a);

	}
	return 0;
}