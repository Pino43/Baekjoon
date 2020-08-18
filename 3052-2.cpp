#include <stdio.h>
//n의 나머지는 n보다 크지 않다.
//인터넷 보고품; 
//성공 

#define num 42 

int main(void) {
	int result = 0;
	int b;
	int a[num] = {0,};
	for (int i = 0; i < 10; i++) {
		scanf("%d", &b);
		a[b%42]++;
	}
	for (int i = 0; i < num; i++) {
		if(a[i] >= 1) {
			result++;
		}
	}
	printf("%d", result);
	return 0;
} 
