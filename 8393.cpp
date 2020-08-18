#include <stdio.h>

int main(void) {
	int n;
	int result = 0;
	scanf("%d", &n);
	for(int i = 0; i <= n; i++){
		result = result + i;
	}
	printf("%d", result);
	return 0;
}
