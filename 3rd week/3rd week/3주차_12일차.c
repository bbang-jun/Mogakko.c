#include <stdio.h>

int arr_input(int* arr);

void find_max(int* arr, int size);

int main(void)
{
	int result = 0;

	int arr[10] = { 0, };

	int* ptr = arr;

	arr_input(ptr);

	find_max(ptr, sizeof(arr) / sizeof(int), &result);

	printf("최대값은 %d이다.", result);


	return 0;
}

int arr_input(int* arr)
{
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	
	return arr;
}

void find_max(int* arr, int size, int* result)
{
	int max = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}

	*result = max;
}