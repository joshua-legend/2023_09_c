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

	int even =0;
	int even_arr[1000] = { 0 };

	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			even++;
			even_arr[i] = arr[i];
		}
	}

	printf("짝수의 개수 : %d\n", even);
	printf("짝수 : ");
	for (int j = 0; j < n; j++) {
		if (even_arr[j] != 0) {
			printf("%d ", even_arr[j]);
		}
		
	}
	

}