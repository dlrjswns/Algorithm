#include<stdio.h>

int main(void) {
	int num;
	int sum;
	printf("원하는 숫자를 넣어주세요(이 알고리즘은 1부터 지정한 숫자까지 합산합니다):");
	scanf("%d", &num);
	sum = (num * (num + 1)) / 2; // 1부터 n까지 합산한 결과는 n(n+1) / 2 이다 
	printf("합산한 결과는 %d입니다.", sum); 
	return 0;
}
