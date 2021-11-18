#include <stdio.h>

int main(void) {

	int score[5] = { 0 }, max = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &score[i]);

		if (max < score[i])
			max = score[i];
	}

	printf("%d", max);

	return 0;
}