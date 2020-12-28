#include <stdio.h>

void reversBits(unsigned int n)
{

	unsigned int mask = 1;
	static int reverse = 0;

	for (int i = 15; i >= 0; i--, n >>= 1)
	{
		int k = 1;
		if (mask == (mask & n))
		{
			for (int j = 0; j < i; j++)
				k *= 2;
			reverse += k;
		}

	}

	printf("\nAfter bits are reversed:\n\t%6d = ", reverse);

	unsigned int mask2 = 1 << 15;

	for (int i = 0; i < 16; i++, reverse <<= 1)
	{
		if (i == 8)
			printf(" ");
		if (mask2 == (mask2 & reverse))
			printf("1");
		else
			printf("0");

	}


}

int main()
{
	printf("Enter an unsigned integer: ");

	unsigned int n1;
	scanf_s("%u", &n1);

	unsigned int n2 = n1;

	printf("\nBefore bits are reversed:\n\t%6d = ", n1);

	unsigned int mask = 1 << 15;

	for (int i = 0; i < 16; i++, n1 <<= 1)
	{
		if (i == 8)
			printf(" ");
		if (mask == (mask & n1))
			printf("1");
		else
			printf("0");

	}


	reversBits(n2);
}