#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>				//srand, rand
#include <time.h>				//�ð����� ���� time(NULL)
#include <conio.h>				//_getch
#include <windows.h>			//Sleep
#include <math.h>				//�������� �����Լ�
#include <ctype.h>				//�빮�� �ҹ��� ��ȯ

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
//			printf("�Ǽ� �Է� :");
//			scanf_s("%f", &data[i]);
//			sum += data[i];
//		}
//		printf("\n �� �հ� : %f \n", sum);
//		printf("\n");
//	}
//}

//void main() {
//	int M[] = { 2,1,3,2,4 };
//	float sum = 0;
//	float avg;
//
//	int array_size = sizeof(M) / sizeof(int);				//�迭�� ������ �˾Ƴ� �� �ִ�.
//	for (int i = 0;i < array_size;i++) {
//		sum += M[i];
//	}
//	avg = sum / array_size;
//
//	printf("�迭 ������ ���� : %d \n", array_size);
//	printf("%f \n", sum);
//	printf("�迭 ������ ��� �� : %f \n", avg);
//}

//void main() {
//	int M[5];
//	int max = 0;
//	int min = 0;
//	for (int i = 0;i < 5;i++) {
//		printf("������ �Է��Ͻÿ� : ");
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
//	printf("\n�ִ밪�� %d \n", max);
//	printf("�ּҰ��� %d \n", min);
//}

//void main() {
//	char _date[10], _time[10];
//
//	while (!_kbhit()) {
//		system("cls");
//		_strdate_s(_date, 10);
//		_strtime_s(_time, 10);
//
//		printf("%s \n", _date);
//		printf("%s \n", _time);
//		Sleep(1000);
//	}
//}

void main() {
	int M[] = { 5,9,2,7,1,10,4,6,8,3 };
	for (int i = 0;i < sizeof(M) / sizeof(int);i++) {
		printf("before \n");
		printf("M[%d] = %d \n", i, M[i]);
	}
	bubblesort(M, sizeof(M) / sizeof(int));

	for (int j = 0;j < sizeof(M) / sizeof(int);j++) {
		printf("after \n");
		printf("M[%d] = %d \n", j, M[j]);
	}
}

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