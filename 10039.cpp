#include <stdio.h>

int main(void) {
	int score[5];
	int n = 0;
	for(int i = 0; i < 5; i++) {
		scanf("%d", &score[i]);
		if(score[i] < 40) {
			score[i] = 40;
		}
		n += score[i];
	}
	printf("%d", n);
	return 0;
}
