#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("Enter pairs of item numbers and quantities.\n");
	printf("Enter -1 for the item number to end input.\n");

	double sum = 0;
	int product, quantity;
	scanf("%d", &product);
	while (product != -1)
		{
		scanf("%d", &quantity);
			
			switch (product)
			{
			case 1:
				sum += 2.98 * quantity;
				break;
			case 2:
				sum += 4.50 * quantity;
				break;
			case 3:
				sum += 9.98 * quantity;
				break;
			case 4:
				sum += 4.49 * quantity;
				break;
			case 5:
				sum += 6.87 * quantity;
				break;
			default:
				printf("Invalid product code :  %d\n             Quantity:  %d\n", product, quantity);
			}
			scanf("%d", &product);
		}
	printf("The total retail value was: %f\n", sum);
	return 0;
	
	}