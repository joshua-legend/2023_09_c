#include <stdio.h>
int main() {

	/*int n; int sum = 0;
	printf("�ڿ��� �Է� : ");
	scanf_s("%d", &n);

	for (int i = 0; i <= n; i++) {
		sum += i;
	}

	printf("1���� %d������ �� : %d\n", n, sum);*/


	int n; int i = 1; int sum = 0;
	printf("�ڿ��� �Է� : ");
	scanf_s("%d", &n);

	while (i <= n) {
		sum += i++;
	}
	printf("1���� %d������ �� : %d\n", n, sum); 




}