#include <stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);

int main()
{
	int(*fun[3])(int, int) = { add, sub, mul };
	char operation[3] = { '+', '-', '*' };

	int select, num1, num2, result;

	printf("0.Addition\n1.Subtraction\n2.Multiplication\n3.End\n");
	printf("select the operation: ");
	
	scanf_s("%d", &select);

	if (select == 3)
	{
		printf("Exit");
		return 0;
	}
	
	printf("Enter the two numbers: ");
	scanf_s("%d%d", &num1, &num2);

	result = (*fun[select])(num1, num2);

	printf("\n\t%d %c %d = %d", num1, operation[select], num2, result);

	return 0;

}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}