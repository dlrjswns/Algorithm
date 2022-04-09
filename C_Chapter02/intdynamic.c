#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int * a;
 	a = calloc(1, sizeof(int));
	
	if(a == NULL) {
		printf("메모리 할당에 실패하였습니다");
	}
	else {
		*a = 75;
	
		printf("*a = %d", *a);	
		
		free(a);
	}
	 
	return 0;
}
