#include<stdio.h>
#include<time.h> 
#include<stdbool.h>
#define SCALE 300000 // ������ ������ 1 ~ 300000 �̹Ƿ� SCALE ���� 

int main(void)
{
	clock_t start, stop;
	double duration;
	 
	unsigned long counter = 0; // �ݺ� Ƚ���� ���� ī��Ʈ���� 
	bool isPrime;
	
	start = clock(); //���� ���� 
	for(int i = 2; i <= SCALE; i++) { // �Ҽ��� 1�� �ڱ��ڽ��� ������ ���� �����������ʴ� ���̹Ƿ� 1�� �Ҽ��� �� �� ������ 2���� ����, ���ϴ� ���� num���� 
		isPrime = true; // for���� ������ ī��Ʈ �ʱ�ȭ
		for(int j = 2; j*j <= i; j++) { // ���� 30,0000���� Ȯ�������ʰ� ��Ʈ i ������ Ȯ���ϴ��� �Ҽ��Ǻ����� 
			counter++; // ����, ������ ����Ƚ�� ���� 
			if (i % j == 0) { // ����������� ���� �Ҽ��� �ƴϴ� 
				isPrime = false;
				break;
			}
		}
		if(isPrime) // true �� ��� ���    
			printf("%d ", i);		
	}
	stop = clock(); // ���� ����
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("����ð��� %f���Դϴ�.\n", duration);
	printf("�ݺ�Ƚ���� %lu\n", counter); //�� �ݺ� Ƚ�� 
	
	return 0;
} 
