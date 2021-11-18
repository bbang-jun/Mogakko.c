#include <stdio.h>

int main(void) {

	int a=10, b=15;

	int* ptr1 = &a;
	int* ptr2 = &b;

	printf("a의 값 : %d\n", *ptr1);
	printf("a의 주소값 : %p\n\n", ptr1);

	printf("b의 값 : %d\n", *ptr2);
	printf("b의 주소값 : %p\n\n", ptr2);

	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

	printf("바꾼 뒤 a의 값 : %d\n", *ptr1);
	printf("바꾼 뒤 a의 주소값 : %p\n\n", ptr1);

	printf("바꾼 뒤 b의 값 : %d\n", *ptr2);
	printf("바꾼 뒤 b의 주소값 : %p\n", ptr2);


	return 0;
}