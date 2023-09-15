#include <stdio.h>
int main() {

	int choice, n;
	
	printf("숫자를 입력하세요 : ");
	scanf("%d", &n);

	char s[1000];

	printf("문자열을 입력하세요 : ");
	scanf("%s", s);

	printf("1. 짝수 2. 홀수 : ");
	scanf("%d", &choice);

	if (choice != 1 && choice != 2) {
		printf("잘못된 입력입니다.\n");
	}

	else if (choice == 1) {
		for (int i = 0; i <= n/2; i++) {
			printf("%c", s[2 * i]);
		}
	}
	else {
		for (int i = 0; i <= n/2; i++) {
			printf("%c", s[2 * i + 1]);
		}
	}


}