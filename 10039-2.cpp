#include <stdio.h>

int main(void) {
	int n, result;
	result = 0;
	for(int i = 0; i < 5; i++) {
		scanf("%d", &n);
		if(n < 40) {
			n = 40;
		}
		result += n;
		n = 0;
	}
	printf("%d", result/5);
}
