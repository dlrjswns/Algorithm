#include<stdio.h>

int main(void) {
	int fir;
	int sec;
	int thd;
	int max;
	printf("세 정수를 차례대로 입력해주세요");
	scanf("%d %d %d", &fir, &sec, &thd);
	max = fir;
	if(max < sec) {
		max = sec;
		if(max < thd) {
			max = thd;
		}
	}
		
	printf("세 정수의 최댓값은 %d입니다.", max); 
	return 0;
} 
