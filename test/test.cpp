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
	// 난수 생성
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


	printf("\n\n\n난수 생성 후 정렬 전\n");
	for (int i = 0; i < MAX_COUNT; i++) {
		printf("%d, ", data[i]);
	}


	printf("\n\n\n난수 생성 후 오름차순 정렬\n");
	sort(data, data + MAX_COUNT);
	for (int i = 0; i < MAX_COUNT; i++)
	{
		cout << data[i] << " ";
	}
	
	printf("\n\n\n난수 생성 후 내림차순 정렬\n");
	sort(data, data + MAX_COUNT, greater<int>());
	for (int i = 0; i < MAX_COUNT; i++)
	{
		cout << data[i] << " ";
	}
	
	//------------------------------------------------------------------

	// 탐색
	int find;

	printf("\n\n찾고 싶은 수를 입력하시오 : ");
	scanf_s("%d", &find);
	for (int i = 0; i < ((sizeof(data)) / 4); i++) {
		if (data[i] == find) {
			printf("\n원하는 숫자를 찾았습니다\n");
			printf("배열의 번지수 : %d\n\n", data[i]);
			break;
		}
		else if (i == (sizeof(data)) / 4) {
			printf("존재하지 않습니다.\n");
		}
	}

	//------------------------------------------------------------------

	// 삭제
	


	//------------------------------------------------------------------

	// 사용 시간 출력 (ms)
	clock_t start, end;
	double result;
	int j, k;
	int sum = 0;

	start = clock();	// 시간 측정 시작

	for (j = 0; j < 10000; j++) {
		for (k = 0; k < 10000; k++) {
			sum += j * k;
		}
	}

	end = clock();
	result = (double)(end - start);

	//------------------------------------------------------------------

	// 출력
	printf("\n사용된 시간 : %fms\n", result);
	printf("\n사용된 데이터 개수 : %d\n", sizeof(data) / sizeof(data[0]));
	printf("\n201934024_이지원\n");

	return 0;
}

//난수 : https://blog.naver.com/tipsware/221248077710
//시간 출력 : https://hijuworld.tistory.com/1
//정렬 : https://hongku.tistory.com/153