#include<stdio.h>

int main(void) {
	int fir;
	int sec;
	int thd;
	int max;
	printf("�� ������ ���ʴ�� �Է����ּ���");
	scanf("%d %d %d", &fir, &sec, &thd);
	max = fir;
	if(max < sec) {
		max = sec;
		if(max < thd) {
			max = thd;
		}
	}
		
	printf("�� ������ �ִ��� %d�Դϴ�.", max); 
	return 0;
} 
