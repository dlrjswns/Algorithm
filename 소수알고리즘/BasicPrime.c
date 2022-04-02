#include<stdio.h>
#include<time.h> 
#define SCALE 300000 // 문제의 범위가 1 ~ 300000 이므로 SCALE 지정 

int main(void)
{
	clock_t start, stop;
	double duration;
	 
	int count; // 나누어 떨어질때 세는 카운트역할
	unsigned long counter = 0; // 반복 횟수를 세는 카운트역할 
	
	start = clock(); //측정 시작 
	for(int i = 2; i <= SCALE; i++) { // 소수는 1과 자기자신을 제외한 수로 나누어지지않는 수이므로 1은 소수가 될 수 없으니 2부터 시작, 원하는 수인 num까지 
		count = 0; // for문을 돌기전 카운트 초기화
		for(int j = 2; j <= i; j++) {
			counter++; 
			if (i % j == 0) // 나뉘어떨어지는경우가 있을때 count를 증가시켰다(소수라면 자기자신 단 한번만 카운트될것) 
				count ++;
		}
		if(count == 1) // count가 1인 경우인 이유는 위에서 범위를 j<=j로 지정했기때문에 나뉘어떨어지는 경우는 이 경우밖에 없을것   
			printf("%d ", i);		
	}
	stop = clock(); // 측정 종료
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("수행시간은 %f초입니다.\n", duration);
	printf("반복횟수는 %lu\n", counter); //총 반복 횟수 
	
	return 0;
}
