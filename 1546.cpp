#include <stdio.h>

int main(void) {
	int n;
	float max = 0;
	float avg = 0;
	scanf("%d", &n);
	float score[n];
	for(int i = 0; i < n; i++) {
		scanf("%f", &score[i]);
		if(score[i] > max) {
			max = score[i];
		}
	}
	
	for(int i = 0; i < n; i++) {
		score[i] = score[i] / max * 100;
		avg = avg + score[i];
	}
	printf("%f", avg/n);
	return 0;
}
