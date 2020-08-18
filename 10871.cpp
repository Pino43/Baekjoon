#include <stdio.h>

int main(void) {
	int n, x, c;
	c = 0;
	scanf("%d %d", &n, &x);
	int a[n];
	for(int i = 0; i < n; i++) {
		scanf("%d",&a[i]);	
	}
	for(int i = 0; i < n; i++) {
		if(a[i] < x){
			printf("%d ",a[i]);
		}
	}

	
	return 0;
}
