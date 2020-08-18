#include <stdio.h>
//¸øÇ°; 
int main(void) {
	int num[3];
	int n = 0;
	scanf("%d", &num[0]);
	scanf("%d", &num[1]);
	scanf("%d", &num[2]);
		
	if(num [0] < num[1]) {
		if(num[0] < num[2]) {
			if(num[1] < num[2]){
				printf("%d", num[1]);
			}	
			else {
			printf("%d",num[2]);
			}
		}	
	}
	 if(num[1] < num[0]){
		if(num[1] < num[2]) {
			if(num[0] < num[2]){
				printf("%d", num[0]);
			}	
			else {
			printf("%d",num[2]);
			}
		}		
   } 
    if(num[2] < num[0]){
		if(num[2] < num[1]) {
			if(num[0] < num[1]){
				printf("%d", num[0]);
			}	
			else {
				printf("%d",num[1]);
			}
		}		
   } 
	return 0;
}
