#include <stdio.h>
//n�� �������� n���� ũ�� �ʴ�.
//���ͳ� ����ǰ; 
//���� 

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
