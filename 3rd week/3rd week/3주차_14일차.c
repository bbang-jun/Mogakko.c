#include <stdio.h>

int main(void)
{
	int n;
	int result = 0;

	printf("숫자  n 입력 : ");
	scanf("%d", &n);
	int arr[10000] = { 0 };

	for (int i = 0; i <= n; i++)
	{
		if (i == 0 || i == 1) {
			arr[0] = 0;
			arr[1] = 1;
		}

		else if (i >= 2)
		{
			arr[i] = arr[i - 1] + arr[i - 2];

			if (i == n)
				result = arr[i];
		}
	}

	printf("결과:%d ", result);

	return 0;
}