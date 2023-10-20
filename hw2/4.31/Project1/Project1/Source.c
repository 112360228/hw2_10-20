#include <stdio.h>

int main() {
	int size, i, j;

	// Set the size of the diamond (you can change this value)
	size = 5;

	// Upper part of the diamond
	for (i = 1; i <= size; i++) {
		for (j = 1; j <= size - i; j++) {
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	// Lower part of the diamond
	for (i = size - 1; i >= 1; i--) {
		for (j = 1; j <= size - i; j++) {
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
