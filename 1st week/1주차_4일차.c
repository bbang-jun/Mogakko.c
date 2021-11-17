#include <stdio.h>

int main(void) {
	int a = 0, b = 1;

	printf("%d\n", a < b);
	printf("%d\n", a != b);
	printf("%d\n", b < 2);
	a = b++;
	printf("%d\n", a);

	return 0;
}