#include<stdio.h>

int main(void) {
	int num;
	printf("��ȣ�� Ȯ���ϰ���� ������ �Է����ּ���.");
	scanf("%d", &num);
	if(num > 0) {
		printf("%d�� ����Դϴ�.", num);
	} else if(num < 0) {
		printf("%d�� �����Դϴ�.", num);
	} else {
		printf("�� ���� 0�Դϴ�.");
	}
		
	return 0;
}
