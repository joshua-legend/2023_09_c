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
	printf("ù° �ڸ� : ");
	scanf_s("%d", &a);
	printf("ù° �ڸ� : ");
	scanf_s("%d", &b);
	printf("ù° �ڸ� : ");
	scanf_s("%d", &c);

	while (true) {

		if (a == num1 && b == num2 && c == num3) {
			break;
		}

		printf("ù° �ڸ� : ");
		scanf_s("%d", &a);
		printf("ù° �ڸ� : ");
		scanf_s("%d", &b);
		printf("ù° �ڸ� : ");
		scanf_s("%d", &c);


	}



	printf("ù° �ڸ� : ");
	scanf_s("%d", &a);
	printf("ù° �ڸ� : ");
	scanf_s("%d", &b);
	printf("ù° �ڸ� : ");
	scanf_s("%d", &c);










	/*int a[4];
	int ball=0, strike=0;

	
	for (int i = 0;; i++) {
		printf("ù° �ڸ� : ");
		scanf_s("%d", &a[0]);
		printf("��° �ڸ� : ");
		scanf_s("%d", &a[1]);
		printf("��° �ڸ� : ");
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
				printf("%d ball�Դϴ�.\n", ball);
			}
			printf("%d strike�Դϴ�.\n", strike);
		}

		if (a[0] == a[1] || a[0] == a[2] || a[1] == a[2]) {
			printf("�߸��� �Է��Դϴ�.\n");
		}
		if (a[0] == num[1] && a[1] == num[2] || a[2] == num[3]) {
			printf("Ȩ���Դϴ�.\n");
			break;
		}
		
	}
	*/



}