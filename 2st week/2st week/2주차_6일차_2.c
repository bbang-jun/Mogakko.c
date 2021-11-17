#include <stdio.h>

int main(void) {
	
	int n;

	scanf("%d", &n);

	switch (n) {

	case 1:
		printf("콜라가 선택되었습니다.");
		break;

	case 2:
		printf("사이다가 선택되었습니다.");
		break;

	case 3:
		printf("물이 선택되었습니다.");
		break;

	default:
		printf("잘못 입력하셨습니다.");
		break;
	}

	return 0;
}