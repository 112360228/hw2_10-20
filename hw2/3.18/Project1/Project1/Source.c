#include <stdio.h>

int main() {
	float grossSales, earnings;

	do {
		printf("Enter sales in dollars (-1 to end):");
		scanf("%f", &grossSales);
		earnings = 200.0 + 0.09 * grossSales;
		if (grossSales != -1) {
			printf("Salary is: $%.2f\n", earnings);
		}
	} while (grossSales != -1);
}