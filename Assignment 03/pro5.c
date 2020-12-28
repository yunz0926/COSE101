#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void toss(int n);

int main()
{
	int headcount = 0;
	int tailcount = 0;
	
	srand(time(NULL));

	for(int i = 1; i <= 100; i++)
	{
		
		int a = rand() % 2;
		toss(a);

		if (a == 0)
			tailcount++;
		else
			headcount++;

		if (i % 10 == 0)
			printf("\n");
	}

	printf("\nThe total number of Heads was %d\nThe total number of Tails was %d\n", headcount, tailcount);

	return 0;
}

void toss(int n)
{
	if (n == 0)
		printf("Tails ");
	else
		printf("Heads ");
}

