#include <stdio.h>

int main(void) {

	int num;

	printf("정수를 입력하세요 : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		if (i % 3 == 0)
			printf("* ");
		else
		printf("%d ", i);
	}

	return 0;
}