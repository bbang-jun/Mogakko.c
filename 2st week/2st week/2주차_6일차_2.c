#include <stdio.h>

int main(void) {
	
	int n;

	scanf("%d", &n);

	switch (n) {

	case 1:
		printf("�ݶ� ���õǾ����ϴ�.");
		break;

	case 2:
		printf("���̴ٰ� ���õǾ����ϴ�.");
		break;

	case 3:
		printf("���� ���õǾ����ϴ�.");
		break;

	default:
		printf("�߸� �Է��ϼ̽��ϴ�.");
		break;
	}

	return 0;
}