#include <stdio.h>
int main() {

	int n;
	int arr[1000];

	printf("�Է��� ������ ���� : ");
	scanf_s("%d", &n);

	printf("���� %d���� �Է��ϼ��� : ", n);
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

	printf("¦���� ���� : %d\n", even);
	printf("¦�� : ");
	for (int j = 0; j < n; j++) {
		if (even_arr[j] != 0) {
			printf("%d ", even_arr[j]);
		}
		
	}
	

}