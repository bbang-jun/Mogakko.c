#include <stdio.h>

int main(void) {

	int a=10, b=15;

	int* ptr1 = &a;
	int* ptr2 = &b;

	printf("a�� �� : %d\n", *ptr1);
	printf("a�� �ּҰ� : %p\n\n", ptr1);

	printf("b�� �� : %d\n", *ptr2);
	printf("b�� �ּҰ� : %p\n\n", ptr2);

	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

	printf("�ٲ� �� a�� �� : %d\n", *ptr1);
	printf("�ٲ� �� a�� �ּҰ� : %p\n\n", ptr1);

	printf("�ٲ� �� b�� �� : %d\n", *ptr2);
	printf("�ٲ� �� b�� �ּҰ� : %p\n", ptr2);


	return 0;
}