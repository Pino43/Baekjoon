#include <stdio.h>

//���� ������ �Է� n�� ������ �̴�.
//����Ҷ� ���� ������ n�� 2�������� ���� ������ �����ϸ� 
//�� ���� ������ �������� �ʾƵ� �ȴ�. ex:1  

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
