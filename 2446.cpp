#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	n = n * 2;
	for(int i = n; i >= 1; i--) {
		for(int a = i; a > 0; a--){
			printf("*");
		}
		printf("\n");
	}
	for(int i = 2; i < n; i++) {
		for(int a = 1; a < i; a++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
