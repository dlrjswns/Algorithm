#include<stdio.h>

int main(void) {
	int num;
	printf("부호를 확인하고싶은 정수를 입력해주세요.");
	scanf("%d", &num);
	if(num > 0) {
		printf("%d는 양수입니다.", num);
	} else if(num < 0) {
		printf("%d는 음수입니다.", num);
	} else {
		printf("이 수는 0입니다.");
	}
		
	return 0;
}
