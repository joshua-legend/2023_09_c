#include <stdio.h>
int main() {

	int n;
	scanf_s("%d", &n);
	printf("\n");

	for (int i = 1; i <= n; i++) {
		for (int j = n-i; j >= 1; j--) {
			printf(" ");
		}
		for (int k = 1; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}


	printf("\n");


	for (int i = 1; i <= 5; i++) {
		for (int j = 5; j >= 1; j--) {
			if (i < j) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
		
	
	printf("\n");


	for (int i = 1; i <= n; i++) {
		for (int j = n - i; j >= 1; j--) {
			printf(" ");
		}
		for (int k = 1; k < i*2; k++) {
			printf("*");
		}
		printf("\n");
	}


}