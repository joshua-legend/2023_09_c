#include <stdio.h>
int main() {

	int k, e, m;
	printf("���� : ");
	scanf_s("%d", &k);
	printf("���� : ");
	scanf_s("%d", &e);
	printf("���� : ");
	scanf_s("%d", &m);

	if (k > 100) {
		printf("���� ");
	}
	if (e > 100) {
		printf("���� ");
	}
	if (m > 100) {
		printf("���� ");
	}
	if ((k > 100)||(e > 100)||(m > 100)) {
		printf("������ �߸� �Է� �Ǿ����ϴ�.");
	}

	float avg;
	avg = (k + e + m) / 3.0;

	if ((k <= 100) && (e <= 100) && (m <= 100)) {

		printf("��� %.1f���̰� ������ ", avg);

		if (avg >= 95) {
			printf("A+�Դϴ�.");
		}
		else if (avg >= 90) {
			printf("A�Դϴ�.");
		}
		else if (avg >= 85) {
			printf("B+�Դϴ�.");
		}
		else if (avg >= 80) {
			printf("B�Դϴ�.");
		}
		else if (avg >= 75) {
			printf("C+�Դϴ�.");
		}
		else if (avg >= 70) {
			printf("C�Դϴ�.");
		}
		else if (avg >= 60) {
			printf("D�Դϴ�.");
		}
		else {
			printf("F�Դϴ�.");
		}
	}

}