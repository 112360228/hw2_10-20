#include <stdio.h>
#include <math.h>

int main() {
	double principal = 5000.0;
	int years = 15;

	for (double rate = 10.0; rate <= 12.0; rate += 0.5) {
		double interestRate = rate / 100.0;
		double amount = principal;

		for (int year = 1; year <= years; year++) {
			amount += amount * interestRate;
		}

		printf("At %.1f%% interest rate, the final amount will be $%.2f\n", rate, amount);
	}

	return 0;
}