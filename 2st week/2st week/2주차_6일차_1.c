#include <stdio.h>

int main(void) {

	int num[3], most=0;

	for (int i = 0; i < 3; i++) {
		scanf("%d", &num[i]);

		if (most < num[i])
			most = num[i];
	}

	printf("가장 큰 수는 %d입니다.", most);

	return 0;
}