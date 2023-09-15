#include <stdio.h>
int main() {

	int n;
	int arr[1000];

	printf("입력할 숫자의 개수 : ");
	scanf_s("%d", &n);

	printf("숫자 %d개를 입력하세요 : ", n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}

	int max = arr[0];
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	for (int i = 0; i < n; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	printf("max : %d\n", max);
	printf("min : %d\n", min);

}