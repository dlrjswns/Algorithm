#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 300000

int main() {

	clock_t start, stop;
	double duration;
	unsigned long counter = 0; // �ݺ� Ƚ���� ���� ī��Ʈ����

    int arr[SIZE];
    arr[0] = 0; // 0�� 1�� ���� �Ҽ��� ���ɼ��� ���⶧���� �̸� 0�� ���� 
    arr[1] = 0;
    int i, j;

	start = clock(); //���� ����
    for (i = 2; i <= SIZE; i++) {
    	counter++; 
		arr[i] = 1;
	}
    

    for (i = 2; i <= SIZE; i++) {
        if (arr[i] == 1) { 
            for (j = i + i; j < SIZE; j += i) { // �����佺�׳׽��� ü ���ó�� �Ҽ��� ��� ������ ����� ���� �ɷ����� ���� ���� ���� �Ҽ��� ������������ �ݺ��� 
            	counter++; 
                arr[j] = 0; // �����佺�׳׽��� ü ��Ŀ� �°� �ɷ����� �ڵ� 
            }
        }
        else continue;
    }
    
    for(i = 2; i < SIZE; i++) {
    	if(arr[i] == 1) { // �Ҽ��� ���(��Ұ� 1�� ���) ��� 
    		printf("%d ", i);
		}
	}
	stop = clock(); // ���� ����
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("����ð��� %f���Դϴ�.\n", duration);
	printf("�ݺ�Ƚ���� %lu\n", counter); //�� �ݺ� Ƚ��
}

