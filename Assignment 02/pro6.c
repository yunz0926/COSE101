#include<stdio.h>

int main(void) {
	double pi = 0.0; 
	double num = 4.0;
	double denom = 1.0;
	long int loop;
	long int accuracy;

	accuracy = 900000;

	printf("Accuracy set at: %d\n", accuracy);
	printf("term\t\t  pi\n");

	for (loop = 1; loop <= accuracy; loop++) {
		if (loop % 50000 == 0) {
			denom = 1.0;
			pi = 0.0;
			for (long int a = 1; a <= loop; a++) {
				double b = num / denom;
				if (a % 2 == 1) {
					pi += b;
				}
				else {
					pi -= b;
				}
				denom += 2;
			}
			printf("%ld\t\t%.6f\n", loop, pi);
		}
	}
	return 0;
}