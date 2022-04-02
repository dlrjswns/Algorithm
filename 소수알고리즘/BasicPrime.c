#include<stdio.h>
#include<time.h> 
#define SCALE 300000 // ������ ������ 1 ~ 300000 �̹Ƿ� SCALE ���� 

int main(void)
{
	clock_t start, stop;
	double duration;
	 
	int count; // ������ �������� ���� ī��Ʈ����
	unsigned long counter = 0; // �ݺ� Ƚ���� ���� ī��Ʈ���� 
	
	start = clock(); //���� ���� 
	for(int i = 2; i <= SCALE; i++) { // �Ҽ��� 1�� �ڱ��ڽ��� ������ ���� �����������ʴ� ���̹Ƿ� 1�� �Ҽ��� �� �� ������ 2���� ����, ���ϴ� ���� num���� 
		count = 0; // for���� ������ ī��Ʈ �ʱ�ȭ
		for(int j = 2; j <= i; j++) {
			counter++; 
			if (i % j == 0) // ����������°�찡 ������ count�� �������״�(�Ҽ���� �ڱ��ڽ� �� �ѹ��� ī��Ʈ�ɰ�) 
				count ++;
		}
		if(count == 1) // count�� 1�� ����� ������ ������ ������ j<=j�� �����߱⶧���� ����������� ���� �� ���ۿ� ������   
			printf("%d ", i);		
	}
	stop = clock(); // ���� ����
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("����ð��� %f���Դϴ�.\n", duration);
	printf("�ݺ�Ƚ���� %lu\n", counter); //�� �ݺ� Ƚ�� 
	
	return 0;
}
