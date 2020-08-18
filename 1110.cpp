#include <stdio.h>

int cycle(int i){
	int N = i;
	int a, d;
	int b = N % 10;
	N = N /10;
	a = N % 10;
	d = (a+b) % 10;
	return d + b * 10 ;
}

int main(void) {
	int n, y;
	int C;
	scanf("%d",  &n);
	if(n < 10) {
		n = n * 10;
	}
	y = n;
	while(true) {
		n = cycle(n);
		//printf("%d\n",n);
		C++;
		if(n == y){
			break;
		}
		
	}
	printf("%d\n",C);	
	return 0;
}
