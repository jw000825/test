#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <string>

using namespace std;

#define  _CRT_SECURE_NO_WARNINGS

#define MAX_COUNT		3000

int main(void) {
	// ���� ����
	int data[MAX_COUNT], i, sub_i, i_count = 0, sub_i_count = 0;
	int temp = 0;
	int data_size = sizeof(data) / sizeof(int);

	srand((unsigned int)time(NULL));

	for (i = 0; i < MAX_COUNT; i++) {
		data[i] = rand() % MAX_COUNT + 1;
		for (sub_i = 0; sub_i < i; sub_i++) {
			if (data[i] == data[sub_i]) {
				i--;
				break;
			}
			sub_i_count++;
		}
		i_count++;
	}

	/*for (i = 0; i < MAX_COUNT; i++) {
		printf("%d, ", data[i]);
	}*/


	printf("\n\n\n���� ���� �� ���� ��\n");
	for (int i = 0; i < MAX_COUNT; i++) {
		printf("%d, ", data[i]);
	}


	printf("\n\n\n���� ���� �� �������� ����\n");
	sort(data, data + MAX_COUNT);
	for (int i = 0; i < MAX_COUNT; i++)
	{
		cout << data[i] << " ";
	}
	
	printf("\n\n\n���� ���� �� �������� ����\n");
	sort(data, data + MAX_COUNT, greater<int>());
	for (int i = 0; i < MAX_COUNT; i++)
	{
		cout << data[i] << " ";
	}
	
	//------------------------------------------------------------------

	// Ž��
	int find;

	printf("\n\nã�� ���� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &find);
	for (int i = 0; i < ((sizeof(data)) / 4); i++) {
		if (data[i] == find) {
			printf("\n���ϴ� ���ڸ� ã�ҽ��ϴ�\n");
			printf("�迭�� ������ : %d\n\n", data[i]);
			break;
		}
		else if (i == (sizeof(data)) / 4) {
			printf("�������� �ʽ��ϴ�.\n");
		}
	}

	//------------------------------------------------------------------

	// ����
	


	//------------------------------------------------------------------

	// ��� �ð� ��� (ms)
	clock_t start, end;
	double result;
	int j, k;
	int sum = 0;

	start = clock();	// �ð� ���� ����

	for (j = 0; j < 10000; j++) {
		for (k = 0; k < 10000; k++) {
			sum += j * k;
		}
	}

	end = clock();
	result = (double)(end - start);

	//------------------------------------------------------------------

	// ���
	printf("\n���� �ð� : %fms\n", result);
	printf("\n���� ������ ���� : %d\n", sizeof(data) / sizeof(data[0]));
	printf("\n201934024_������\n");

	return 0;
}

//���� : https://blog.naver.com/tipsware/221248077710
//�ð� ��� : https://hijuworld.tistory.com/1
//���� : https://hongku.tistory.com/153