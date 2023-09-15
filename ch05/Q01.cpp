#include <stdio.h>
int main() {

	int a[5];
	int arr1[5];
	int n;

	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &a[i]);
	}

	for (int j = 0; j < 5; j++) {
		for (int k = j; k < 5; k++) {
			if (a[j] > a[k]) {
				n = a[k];
				a[k] = a[j];
				a[j] = n;
				for (int c = 0; c < 5; c++) {
					printf("%d ", a[c]);
				}
				printf("\n");
			}

		}
	}

	for (int c = 0; c < 5; c++) {
		printf("%d ", a[c]);
	}

}