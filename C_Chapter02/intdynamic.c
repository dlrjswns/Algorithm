#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int * a;
 	a = calloc(1, sizeof(int));
	
	if(a == NULL) {
		printf("�޸� �Ҵ翡 �����Ͽ����ϴ�");
	}
	else {
		*a = 75;
	
		printf("*a = %d", *a);	
		
		free(a);
	}
	 
	return 0;
}
