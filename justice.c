#include <stdio.h>

void bubblesort_upper(int data[], int n) {
	int temp;
	for (int j = n - 1;j >= 0;j--) {
		for (int i = 0;i < j;i++) {
			if (data[i] > data[i + 1]) {
				temp = data[i];
				data[i] = data[i + 1];
				data[i + 1] = temp;
			}
		}
	}
}

void bubblesort_lower(int data[], int n) {
	int temp;
	for (int j = n - 1;j >= 0;j--) {
		for (int i = 0;i < j;i++) {
			if (data[i] < data[i + 1]) {
				temp = data[i];
				data[i] = data[i + 1];
				data[i + 1] = temp;
			}
		}
	}
}