#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double hypotenuse (double s1, double s2 );

int main()
{
	int num;
	double side1, side2;

	for (num = 0; num < 3; num++)
	{
		printf("Enter the sides of the triangle: ");
		scanf("%lf %lf", &side1, &side2);
		printf("Hypotenuse: %lf\n\n", hypotenuse(side1, side2));

	}


	
}

double hypotenuse(double s1, double s2)
	{
		return sqrt(pow(s1, 2) + pow(s2, 2));
	}