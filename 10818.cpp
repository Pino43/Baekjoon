#include <stdio.h>

int main(void) {
	int n;
	int max, min;
	scanf("%d", &n);
	int i[n];
	for(int a = 0; a < n; a++) {
		scanf("%d", &i[a]);
	}
	max = i[0];
	min = i[0];
	
	for(int a = 0; a < n; a++) {
		if(max < i[a]) {
			max = i[a];
		}
		if(min > i[a]) {
			min = i[a];
		}
	}
	printf("%d %d", min, max);
	return 0;
}
