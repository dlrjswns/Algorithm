#include<stdio.h>

int main(void) {
	int num;
	int sum;
	do {
		printf("1부터 합계를 구할 양수를 입력해주세요:");
		scanf("%d", &num);
	}while(num <= 0);
	
	sum = (num * (num + 1)) / 2;
	printf("합계는 %d입니다.", sum);
	return 0;
} 
