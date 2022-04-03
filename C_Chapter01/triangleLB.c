#include<stdio.h>

int main(void) {
	int n;
	
	do {
		printf("몇단 직각이등변삼각형을 출력할까요 ??");
		scanf("%d", &n);
	} while(n <= 0);
	
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= i; j++) {
			printf("*");	
		}
		printf("\n");
	}
	
	return 0;
}
