#include <stdio.h>
int main() {

	int k, e, m;
	printf("국어 : ");
	scanf_s("%d", &k);
	printf("영어 : ");
	scanf_s("%d", &e);
	printf("수학 : ");
	scanf_s("%d", &m);

	if (k > 100) {
		printf("국어 ");
	}
	if (e > 100) {
		printf("영어 ");
	}
	if (m > 100) {
		printf("수학 ");
	}
	if ((k > 100)||(e > 100)||(m > 100)) {
		printf("점수가 잘못 입력 되었습니다.");
	}

	float avg;
	avg = (k + e + m) / 3.0;

	if ((k <= 100) && (e <= 100) && (m <= 100)) {

		printf("평균 %.1f점이고 학점은 ", avg);

		if (avg >= 95) {
			printf("A+입니다.");
		}
		else if (avg >= 90) {
			printf("A입니다.");
		}
		else if (avg >= 85) {
			printf("B+입니다.");
		}
		else if (avg >= 80) {
			printf("B입니다.");
		}
		else if (avg >= 75) {
			printf("C+입니다.");
		}
		else if (avg >= 70) {
			printf("C입니다.");
		}
		else if (avg >= 60) {
			printf("D입니다.");
		}
		else {
			printf("F입니다.");
		}
	}

}