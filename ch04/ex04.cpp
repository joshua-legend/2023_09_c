#include <stdio.h>
int main() {

	int n;
	for (int i = 1; ; i++) {
		scanf_s("%d", &n);
		if (n == 0) {
			printf("종료합니다.\n");
			break;
		}
		printf("%d번째 입력 결과: %d\n", i, n);
	}

}