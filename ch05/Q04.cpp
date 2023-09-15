#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand(time(NULL));

	int num1, num2, num3;

	num1 = rand() % 9 + 1;
	num2 = rand() % 9 + 1;
	num3 = rand() % 9 + 1;

	while (num1 == num2 || num2 == num3 || num1 == num3) {
		num1 = rand() % 9 + 1;
		num2 = rand() % 9 + 1;
		num3 = rand() % 9 + 1;
	}
	
	
	printf("%d %d %d", num1, num2, num3);

	int ball = 0, strike = 0;
	int a, b, c;
	printf("첫째 자리 : ");
	scanf_s("%d", &a);
	printf("첫째 자리 : ");
	scanf_s("%d", &b);
	printf("첫째 자리 : ");
	scanf_s("%d", &c);

	while (true) {

		if (a == num1 && b == num2 && c == num3) {
			break;
		}

		printf("첫째 자리 : ");
		scanf_s("%d", &a);
		printf("첫째 자리 : ");
		scanf_s("%d", &b);
		printf("첫째 자리 : ");
		scanf_s("%d", &c);


	}



	printf("첫째 자리 : ");
	scanf_s("%d", &a);
	printf("첫째 자리 : ");
	scanf_s("%d", &b);
	printf("첫째 자리 : ");
	scanf_s("%d", &c);










	/*int a[4];
	int ball=0, strike=0;

	
	for (int i = 0;; i++) {
		printf("첫째 자리 : ");
		scanf_s("%d", &a[0]);
		printf("둘째 자리 : ");
		scanf_s("%d", &a[1]);
		printf("셋째 자리 : ");
		scanf_s("%d", &a[2]);
		printf("%d %d %d", a[0], a[1], a[2]);


		for (int j = 0; j < 3; j++) {
			if (a[j] == num[j]) {
				strike += 1;

			}
			else {
				for (int k = j+1; k < 3; k++) {
					if (a[j] = num[k]) {
						ball += 1;
					}
				}
				printf("%d ball입니다.\n", ball);
			}
			printf("%d strike입니다.\n", strike);
		}

		if (a[0] == a[1] || a[0] == a[2] || a[1] == a[2]) {
			printf("잘못된 입력입니다.\n");
		}
		if (a[0] == num[1] && a[1] == num[2] || a[2] == num[3]) {
			printf("홈런입니다.\n");
			break;
		}
		
	}
	*/



}