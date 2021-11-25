#include <stdio.h>

void sosu(int input, int arr[]);

int main(void)
{
	int input;

	int arr[1000] = { 0, };

	scanf("%d", &input);

	sosu(input, arr);

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		if (arr[i] == 0)
			continue;
		printf("%d ", arr[i]);
	}

	return 0;
}

void sosu(int input, int arr[])
{
	int num = 0;
	int j = 0;
	for (int i = 1; i < input; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i)
		{
			arr[num] = j;
			num++;
		}

	}
}