#include <stdio.h>
int main() {

	char charr[] = "hellofsdhbaergaergeas";

	printf("%s\n", charr);

	char charr1[] = { 'h', 'e', 'l', 'l', 'o', '\0' };

	printf("%s\n", charr1);
	printf("%c\n", charr1[3]);

}