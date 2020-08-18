#include <stdio.h>
//½ÇÆĞ ¤Ğ 

int main(void) {
	int num[10];
	int na[10]= {0,0,0,0,0,0,0,0,0,0};
	int count = 0;
	int count2 = 0;
	int count3 = 0;
	for(int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}
	
	for(int i = 0; i < 10; i++) {
		num[i] = num[i] % 42;
	}
	
	for(int b = 0; b < 10; b++) {
		for(int a = 0; a < 10; a++) {
			if(num[b] != num[a]){
			count++;		
			}
		}
		if(count == 9){
			count2++;
		}
		else if(count < 9) {
			count3 = count;
		}
		count = 0;
	}
	count3 = count3 / 2;
	count2 = count2 + count3;
	printf("%d", count2);
	
	return 0;
}
