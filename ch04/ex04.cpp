#include <stdio.h>
int main() {

	int n;
	for (int i = 1; ; i++) {
		scanf_s("%d", &n);
		if (n == 0) {
			printf("�����մϴ�.\n");
			break;
		}
		printf("%d��° �Է� ���: %d\n", i, n);
	}

}