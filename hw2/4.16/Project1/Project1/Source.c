#include <stdio.h>

int main() {
	int rows, i, j;

	// (A)
	printf("\n(A)\n");
	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= i; j++) {
			printf("%s", "*");
		}
		printf("\n");
	}

	// (B)
	printf("\n(B)\n");
	for (i = 10; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf("%s", "*");
		}
		printf("\n");
	}

	// (C)
	printf("\n(C)\n");
	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= i; j++) {
			printf(" ");
		}
		for (j = 1; j <= 10 - i; j++) {
			printf("%s", "*");
		}
		printf("\n");
	}

	// (D)
	printf("\n(D)\n");
	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= 10 - i; j++) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("%s", "*");
		}
		printf("\n");
	}

	return 0;
}
