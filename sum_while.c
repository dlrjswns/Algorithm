#include<stdio.h>

int main(void) {
	int num;
	int sum;
	printf("���ϴ� ���ڸ� �־��ּ���(�� �˰����� 1���� ������ ���ڱ��� �ջ��մϴ�):");
	scanf("%d", &num);
	sum = (num * (num + 1)) / 2; // 1���� n���� �ջ��� ����� n(n+1) / 2 �̴� 
	printf("�ջ��� ����� %d�Դϴ�.", sum); 
	return 0;
}
