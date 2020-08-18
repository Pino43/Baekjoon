#include <stdio.h>

int main(void) {
	int A, B, C;
	int profit = 0;
	int n = 0;
	scanf("%d %d %d", &A, &B, &C);
	profit = C-B;
	if(B >= C) {
		printf("-1");
	}
	else {
		printf("%d", A / profit + 1);	
	}
	return 0;
}
