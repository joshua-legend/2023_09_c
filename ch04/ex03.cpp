#include <stdio.h>
int main() {

	int n;

	printf("�ڿ��� �Է� : ");
	scanf_s("%d", &n);

	int i, pow;
	for (i = 1, pow = 1; i <= n; i++, pow *= 2) {
		//printf("% d % d\n", i, pow);
	}
	printf("2�� %d������ %d\n", n, pow);


}