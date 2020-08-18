#include <stdio.h>

int main(void) {
	int a, b, c;
	int temp = 0;
	int count[10]={0,0,0,0,0,0,0,0,0,0};
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	int n = a * b * c;
	
	while(n != 0) {
		temp = n % 10;
		count[temp]++;
		n = n / 10;
	}
	
	for(int i = 0; i < 10; i++) {
		printf("%d\n", count[i]);
	}
	return 0;
}
