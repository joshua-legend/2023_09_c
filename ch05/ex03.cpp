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

	for (int j = n; j > 0; j--) {
		printf("%d ", arr[j-1]);
	}

}