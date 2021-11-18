#include <stdio.h>

int main(void) {

	int arr[5] = { 0 };
	int* ptr = arr;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	printf("\n");

	for (int j = 4; j >= 0; j--) {
		printf("%d\n", *(ptr + j));
	}

	return 0;
}