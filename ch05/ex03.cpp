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

	for (int j = n; j > 0; j--) {
		printf("%d ", arr[j-1]);
	}

}