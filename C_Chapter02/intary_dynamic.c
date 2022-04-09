#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int len;
	int *a; // 배열의 첫번째 요소를 가리킬 주소값 
	
	printf("몇개의 요소를 가진 int형 배열을 만들까요 ??\n");
	scanf("%d", &len);
	
	a = calloc(len, sizeof(int));
	
	if(a == NULL) {
		printf("메모리 확보에 실패하였습니다.");
	} 
	else {
		
		printf("%d개의 요소들을 넣어주세요: ", len);
		
		for(int i = 0; i < len; i++) {
			printf("a[%d] : ", i);
			scanf("%d", &a[i]);
		}
	
	for(int j = 0; j < len; j++) {
		printf("a[%d] = %d\n", j, a[j]);
	}
	
	free(a);
		
	} 
	
	return 0;
}
