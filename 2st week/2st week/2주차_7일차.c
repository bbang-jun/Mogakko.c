#include <stdio.h>

int main(void) {

	int num;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		if (i % 3 == 0)
			printf("* ");
		else
		printf("%d ", i);
	}

	return 0;
}