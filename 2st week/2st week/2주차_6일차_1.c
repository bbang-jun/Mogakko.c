#include <stdio.h>

int main(void) {

	int num[3], most=0;

	for (int i = 0; i < 3; i++) {
		scanf("%d", &num[i]);

		if (most < num[i])
			most = num[i];
	}

	printf("���� ū ���� %d�Դϴ�.", most);

	return 0;
}