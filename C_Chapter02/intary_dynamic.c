#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int len;
	int *a; // �迭�� ù��° ��Ҹ� ����ų �ּҰ� 
	
	printf("��� ��Ҹ� ���� int�� �迭�� ������ ??\n");
	scanf("%d", &len);
	
	a = calloc(len, sizeof(int));
	
	if(a == NULL) {
		printf("�޸� Ȯ���� �����Ͽ����ϴ�.");
	} 
	else {
		
		printf("%d���� ��ҵ��� �־��ּ���: ", len);
		
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
