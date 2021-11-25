#include <stdio.h>

void reverse_arr(int arr[], int size);

int main(void)
{
	int arr[10] = { 0, };

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	reverse_arr(arr, sizeof(arr)/sizeof(int));

	for (int j = 0; j < 10; j++)
	{
		printf("%d\n", arr[j]);
	}

	return 0;
}

void reverse_arr(int arr[], int size)
{
	for (int i = 0; i < size/2; i++)
	{
		int temp = 0;

		temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = arr[i];
	}
}