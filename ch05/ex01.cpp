#include <stdio.h>

int main() {
    int a;
    printf("�Է�:");
    scanf_s("%d", &a);

    int divider = 10000;
    int result[5];

    for (int i = 0; i < 5; i++) {
        result[i] = a / divider;
        a = a % divider;
        divider /= 10;
    }

    printf("%d��%dõ%d��%d��%d", result[0], result[1], result[2], result[3], result[4]);

    return 0;
}