#include<stdio.h>
#include<time.h> 
#include<stdbool.h>
#define SCALE 300000 // 문제의 범위가 1 ~ 300000 이므로 SCALE 지정 

int main(void)
{
	clock_t start, stop;
	double duration;
	 
	unsigned long counter = 0; // 반복 횟수를 세는 카운트역할 
	bool isPrime;
	
	start = clock(); //측정 시작 
	for(int i = 2; i <= SCALE; i++) { // 소수는 1과 자기자신을 제외한 수로 나누어지지않는 수이므로 1은 소수가 될 수 없으니 2부터 시작, 원하는 수인 num까지 
		isPrime = true; // for문을 돌기전 카운트 초기화
		for(int j = 2; j*j <= i; j++) { // 굳이 30,0000까지 확인하지않고 루트 i 까지만 확인하더라도 소수판별가능 
			counter++; // 곱셉, 나눗셈 연산횟수 증가 
			if (i % j == 0) { // 나누어떨어지는 경우는 소수가 아니다 
				isPrime = false;
				break;
			}
		}
		if(isPrime) // true 일 경우 출력    
			printf("%d ", i);		
	}
	stop = clock(); // 측정 종료
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("수행시간은 %f초입니다.\n", duration);
	printf("반복횟수는 %lu\n", counter); //총 반복 횟수 
	
	return 0;
} 
