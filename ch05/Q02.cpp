#include <stdio.h>
int main() {

	int choice, n;
	
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &n);

	char s[1000];

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", s);

	printf("1. ¦�� 2. Ȧ�� : ");
	scanf("%d", &choice);

	if (choice != 1 && choice != 2) {
		printf("�߸��� �Է��Դϴ�.\n");
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