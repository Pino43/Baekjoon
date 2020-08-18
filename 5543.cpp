#include <stdio.h> 

int main(void) {
	int burger[3];
	int drink[2];
	int result = 0;
	int bn = 3000;
	int dn = 3000;
	
	for (int i = 0; i < 3; i++){
		scanf("%d", &burger[i]);
		if(burger[i] < bn) {
			bn = burger[i];
		}
	}
	for (int i = 0; i < 2; i++){
		scanf("%d", &drink[i]);
		if(drink[i] < dn) {
			dn = drink[i];
		}
	}
	printf("%d",bn+dn-50);
	return 0;
}
