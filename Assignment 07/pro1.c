#include <stdio.h>

int main()
{
	printf("Enter an integer: ");
	
	unsigned int x;
	scanf_s("%u", &x);

	printf("The total number of 1s in the bit representation is %s\n", func(x) ? "odd" : "even");
	
}

int func(unsigned int bits)
{
	unsigned int i;
	unsigned mask = 1 << 31;
	unsigned int total = 0;

	for (i = 0; i < 32; i++, bits <<= 1)
	{
		if ((bits & mask) == mask)
			total++;
	}
	return (total % 2) ? 1 : 0;
}