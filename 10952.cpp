#include <stdio.h>

int main(void){
	int a, b, c;
	while(true){
		scanf("%d %d", &a, &b);
		if(a==0 && b==0){
			break;
		}
		printf("%d\n", a+b);
	}
	return 0;
}