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