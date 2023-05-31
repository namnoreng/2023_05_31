#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>				//srand, rand
#include <time.h>				//시간변수 설정 time(NULL)
#include <conio.h>				//_getch
#include <windows.h>			//Sleep
#include <math.h>				//여러가지 수학함수
#include <ctype.h>				//대문자 소문자 변환

//void main() {
//	
//	for (int i = 0;i < 5;i++) {
//		int M[5];
//		M[i] = 10 + 10 * i;
//		printf("M[%d] = %d \n", i, M[i]);
//	}
//}

//void main() {
//	while (1) {
//	float data[5];
//	float sum = 0;
//		for (int i = 0;i < 5;i++) {
//			printf("실수 입력 :");
//			scanf_s("%f", &data[i]);
//			sum += data[i];
//		}
//		printf("\n 총 합계 : %f \n", sum);
//		printf("\n");
//	}
//}

//void main() {
//	int M[] = { 2,1,3,2,4 };
//	float sum = 0;
//	float avg;
//
//	int array_size = sizeof(M) / sizeof(int);				//배열의 개수를 알아낼 수 있다.
//	for (int i = 0;i < array_size;i++) {
//		sum += M[i];
//	}
//	avg = sum / array_size;
//
//	printf("배열 데이터 개수 : %d \n", array_size);
//	printf("%f \n", sum);
//	printf("배열 데이터 평균 값 : %f \n", avg);
//}

//void main() {
//	int M[5];
//	int max = 0;
//	int min = 0;
//	for (int i = 0;i < 5;i++) {
//		printf("정수를 입력하시오 : ");
//		scanf("%d", &M[i]);
//	}
//	for (int j = 0;j < sizeof(M) / sizeof(int);j++) {
//		if (max < M[j]) {
//			max = M[j];
//			min = max;
//		}
//	}
//	for (int k = 0;k < sizeof(M) / sizeof(int);k++) {
//		if (min > M[k]) {
//			min = M[k];
//		}
//	}
//	printf("\n최대값은 %d \n", max);
//	printf("최소값은 %d \n", min);
//}

//void main() {
//	char _date[10], _time[10];
//
//	while (!_kbhit()) {
//		system("cls");
//		_strdate(_date, 10);
//		_strtime(_time, 10);
//
//		printf("%s \n", _date);
//		printf("%s \n", _time);
//		Sleep(1000);
//	}
//}

//void main() {
//	int M[] = { 5,9,2,7,1,10,4,6,8,3 };
//	printf("before \n");
//	for (int i = 0;i < sizeof(M) / sizeof(int);i++) {
//		printf("M[%d] = %d \n", i, M[i]);
//	}
//	bubblesort_upper(M, sizeof(M) / sizeof(int));
//	printf("upper \n");
//	for (int j = 0;j < sizeof(M) / sizeof(int);j++) {
//		printf("M[%d] = %d \n", j, M[j]);
//	}
//
//
//	bubblesort_lower(M, sizeof(M) / sizeof(int));
//	printf("lower \n");
//	for (int k = 0;k < sizeof(M) / sizeof(int);k++) {
//		printf("M[%d] = %d \n", k, M[k]);
//	}
//}

//void main() {
//	FILE* fp_r = fopen("c:\\Temp\\in.txt", "r");
//	FILE* fp_w = fopen("c:\\Temp\\out.txt", "w");
//	char input[50] = { 0 }, data[50] = "KPU Mechatronics C Programming";
//
//	fread(input, 1, 50, fp_r);
//	printf("%s", input);
//
//	fprintf(fp_w, "%s", data);
//
//	fclose(fp_r);
//	fclose(fp_w);
//}

void main() {
	while (!_kbhit()) {
	srand(time(NULL));
		int num, result[6] = { 0 }, flag[45] = { 0 };
	system("cls");
		for (int i = 0;i < 6;i++) {
			num = rand() & 45;
			if (flag[num] == 1) {
				i--;
			}
			else {
				result[i] = num;
				flag[num] = 1;
			}
		}
		for (int j = 0;j < 6;j++) {
			printf("%5d", result[j] + 1);
		}
		printf("\n");
		Sleep(1000);
	}
}