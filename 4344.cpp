#include <stdio.h>

int main(void) {
	int n, a;
	float arg = 0;
	float per = 0;
	float st = 0;
	
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &a);
		int num[a];
		for(int b = 0; b < a; b++) {
			scanf("%d", &num[b]);
			arg = arg + num[b];
		}
		arg = arg/a;
		for(int b = 0; b < a; b++) {
			if(num[b] > arg) {
				st++;
			}
		}
		per = st / a * 100;
		printf("%.3f%%\n", per);
		arg = 0;
		per = 0;
		st = 0;
	}
	return 0;
} 
