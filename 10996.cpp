#include <stdio.h>

//별의 개수는 입력 n의 제곱개 이다.
//출력할때 줄의 개수는 n의 2배이지만 별의 개수를 만족하면 
//꼭 줄의 개수를 만족하지 않아도 된다. ex:1  

int main(void) {
	int n;
	scanf("%d", &n);
	int tt = n % 2;
	int t = n / 2;
	int cnt = t + tt;
	
	for(int i = 0; i < n; i++) {
		if(n == 1) {
			printf("*");
			break;
		}
		for(int a = 0; a < cnt; a++) {
			printf("* ");
		}
		printf("\n");
		for(int a = 0; a < t; a++) {
			printf(" *");
		}
		printf("\n");
	}
	return 0;
} 
