#include <stdio.h>

int main(void) {
	int a,b,c,d;
	scanf("%d %d", &a, &b);
	c = b;
	d = 0;
	for(int i =0; i < 3; i++){
		d = b % 10;
		b = b / 10;
		printf("%d\n",a*d);
		d = 0;
	}
	printf("%d\n",a*c);
	return 0;
}
