#include <stdio.h>

int main(void) {
	int n, i;
	scanf("%d", &n);
	i = n;
	for(int a = 1; a <= n; a++){
		for(int b = 1; b < i; b++) {
			printf(" ");
		}
		for(int c = 1; c <= a; c++){
			printf("*");
		}
		i--;
		printf("\n");
	}
	return 0;
}
