#include <stdio.h>
#include <string.h>
//인터넷 보고품; 

int main(void) {
	int n;
	int score = 0;
	int combo = 0;
	
	scanf("%d", &n);
	char ox[100];
	for(int i = 0; i < n; i++) {
		scanf("%s", &ox);
		for(int j = 0; j < strlen(ox); j++){
			if(ox[j] == 'O') {
				score = score + 1 + combo;
				combo++;
			}
			else{
				combo = 0;
			}
		}
		printf("%d\n", score);
		score = 0;
		combo = 0;
	}
	return 0;
}
