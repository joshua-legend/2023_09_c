#include <stdio.h>
int main() {

	int n;

	printf("자연수 입력 : ");
	scanf_s("%d", &n);
	printf("%d의 약수는 ", n);

	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			printf("%d, ", i);
		}
	}

	printf("%d입니다.", n);

}