#include<stdio.h>

int main(void) {
	int num;
	int sum;
	do {
		printf("1���� �հ踦 ���� ����� �Է����ּ���:");
		scanf("%d", &num);
	}while(num <= 0);
	
	sum = (num * (num + 1)) / 2;
	printf("�հ�� %d�Դϴ�.", sum);
	return 0;
} 
