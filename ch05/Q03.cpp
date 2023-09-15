#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand(time(NULL));
	int num1, num2, num3;

	num1 = rand() % 9 + 1;

	for (int i = 0;; i++) {
		num2 = rand() % 9 + 1;
		if (num1 == num2) {
			num2 = rand() % 9 + 1;
		}
		else {
			break;
		}
	}

	for (int i = 0;; i++) {
		num3 = rand() % 9 + 1;
		if (num1 == num3 || num2 == num3){
			num3 = rand() % 9 + 1;
		}
		else {
			break;
		}
	}


	/*int a[4];

	a[1] = rand() % 9 + 1;
	for (int i = 2; i <= 3; i++) {
		for (int j = 0;; j++) {
			for (int k = 0;; k++){
				a[i] = rand() % 9 + 1;
				if (a[i] == a[1]) {
					a[i] = rand() % 9 + 1;
				}
				else {
					break;
				}
			}
		}
	}






	//printf("%d %d %d\n", num1, num2, num3);
	printf("%d %d %d\n", a[1], a[2], a[3]);
	*/

}