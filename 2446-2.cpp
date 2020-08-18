#include <stdio.h>
//¼º°ø 

int main(void) {
	int n;
	scanf("%d", &n);
	int c = n;
	
	for(int i = 0; i < n; i++ ) {
		for(int a = 0; a < i; a++) {
			printf(" ");
		}
		for(int a = c; a > 1; a--) {
			printf("**");
		}
		printf("*");
		printf("\n");		
		c--;
	}
	c = n;
	for(int i = 1; i < n; i++ ) {
		for(int a = c; a > 2; a--) {
			printf(" ");
		}
		for(int a = 0; a < i; a++) {
			printf("**");
		}
		printf("*");
		printf("\n");		
		c--;
	}
	return 0;
}
