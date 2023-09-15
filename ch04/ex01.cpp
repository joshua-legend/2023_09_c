#include <stdio.h>
int main() {

	/*int n; int sum = 0;
	printf("자연수 입력 : ");
	scanf_s("%d", &n);

	for (int i = 0; i <= n; i++) {
		sum += i;
	}

	printf("1부터 %d까지의 합 : %d\n", n, sum);*/


	int n; int i = 1; int sum = 0;
	printf("자연수 입력 : ");
	scanf_s("%d", &n);

	while (i <= n) {
		sum += i++;
	}
	printf("1부터 %d까지의 합 : %d\n", n, sum); 




}