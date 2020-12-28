#include <stdio.h>

int main()
{
	printf("Enter two integers: ");
	unsigned int number, pow;
	scanf_s("%u%u", &number, &pow);

	unsigned int i;
	unsigned int mask = 1 << 15;
	unsigned int n1 = number;
	unsigned int n2 = pow;

	printf("number: \n\t%2d = ", number);
	for (i = 0; i < 16; i++, number <<= 1)
	{
		if (i == 8)
			printf(" ");
		if (mask == (mask & number))
			printf("1");
		else
			printf("0");

	}

	printf("\n\npow: \n\t%2d = ", pow);
		for (i = 0; i < 16; i++, pow <<= 1)
		{
			if (i == 8)
				printf(" ");
			if (mask == (mask & pow))
				printf("1");
			else
				printf("0");

		}
		unsigned int n = 1;
		for (int i = 0; i < n2; i++)
			n *= 2;
		n *= n1;
		
		printf("\n\n%d * 2^%d = %d", n1, n2, n);
		printf("\n\t%2d = ", n);
			for (i = 0; i < 16; i++, n <<= 1)
			{
				if (i == 8)
					printf(" ");
				if (mask == (mask & n))
					printf("1");
				else
					printf("0");

			}

			return 0;
}