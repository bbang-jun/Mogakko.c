#include <stdio.h>

int factorial(int num);

int main(void)
{
	int N;
	
	scanf("%d", &N);

	printf("%d", factorial(N));

	return 0;
}

int factorial(int num)
{
	int result = 1;
	for (int i = num; i > 0; i--) {
		result *= i;
	}

	return result;
}