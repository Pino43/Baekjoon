#include <stdio.h>

int main(void) {
	int max, n;
	int i[9];
	n = 0;
	for(int a = 0; a < 9; a++) {
		scanf("%d", &i[a]);
	}
	max = 0;
	
	for(int a = 0; a < 9; a++) {
		if(max < i[a]) {
			max = i[a];
			n = a + 1;
		}
	}
	printf("%d\n%d", max, n);
	return 0;
}
