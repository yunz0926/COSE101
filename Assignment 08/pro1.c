#include <stdio.h>
#define MAX 10

void bubbleSort(int* arr);

int main()
{
	int arr[MAX] = { 10, 5, 1, 6, 3, 9, 4, 2, 8, 7 };

	bubbleSort(arr);

	for (int i = 0; i < MAX; i++)
		printf("%d  ", arr[i]);
}

void bubbleSort(int* arr)
{
	for (int i = MAX - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}