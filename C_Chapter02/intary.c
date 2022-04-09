#include<stdio.h>
#define N 5

int main(void) {
	
	int a[N];
	
	for(int i = 0; i < N; i++) {
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}	
	
	printf("-------------°á°úÇ¥--------------\n");
	
	for(int j = 0; j < N; j++) {
		printf("a[%d] = %d\n", j, a[j]);
	}
	return 0;
}
