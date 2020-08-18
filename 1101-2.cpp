#include <stdio.h>

int main(void) {
	int num;
	int a, b, c, d;
	int cnt = 0;
	
	scanf("%d", &num);
	if(num < 10){
		num = num * 10;
	}
	a = num;
	while(true){
		c = num % 10; 
		num = num / 10;	
		b = num % 10; 
		d = c + b; 
		num = c * 10 + d % 10;
		cnt++;
		if(num == a){
			break; 
		}
		
	}
	printf("%d",cnt);
}
