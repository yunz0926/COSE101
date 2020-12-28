#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void divisor(int n1, int n2);

int main()
{
	printf("Input gcd number : ");
	
	int n1, n2;
	scanf("%d %d", &n1, &n2);

	divisor(n1, n2);

	return 0;
}
void divisor(int n1, int n2)
{
	int small, large, gcd;
	if (n1 < n2)
	{
		small = n1;
		large = n2;
	}
	else
	{
		small = n2;
		large = n1;
	}

	for (int i = 1; i <= small; i++)
	{
		if (small % i == 0 && large % i == 0)
			gcd = i;
	}
	printf("gcd : %d", gcd);

}