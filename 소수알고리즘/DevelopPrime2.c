#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 300000

int main() {

	clock_t start, stop;
	double duration;
	unsigned long counter = 0; // 반복 횟수를 세는 카운트역할

    int arr[SIZE];
    arr[0] = 0; // 0과 1인 경우는 소수일 가능성이 없기때문에 미리 0을 삽입 
    arr[1] = 0;
    int i, j;

	start = clock(); //측정 시작
    for (i = 2; i <= SIZE; i++) {
    	counter++; 
		arr[i] = 1;
	}
    

    for (i = 2; i <= SIZE; i++) {
        if (arr[i] == 1) { 
            for (j = i + i; j < SIZE; j += i) { // 에라토스테네스의 체 방식처럼 소수인 경우 각각의 배수들 또한 걸러내어 가장 작은 수인 소수를 가져오기위한 반복문 
            	counter++; 
                arr[j] = 0; // 에라토스테네스의 체 방식에 맞게 걸러내는 코드 
            }
        }
        else continue;
    }
    
    for(i = 2; i < SIZE; i++) {
    	if(arr[i] == 1) { // 소수인 경우(요소가 1인 경우) 출력 
    		printf("%d ", i);
		}
	}
	stop = clock(); // 측정 종료
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("수행시간은 %f초입니다.\n", duration);
	printf("반복횟수는 %lu\n", counter); //총 반복 횟수
}

