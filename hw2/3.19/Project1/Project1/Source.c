#include <stdio.h>

int main() {
	double principal, rate, interest;
	int days;
	char another;

	do {
		printf("Enter loan principal(-1 to end): ");
		scanf("%lf", &principal);

		if (principal != -1) {
			printf("Enter interest rate : ");
			scanf("%lf", &rate);

			printf("Enter term of the loan in days: ");
			scanf("%d", &days);

			// Calculate the simple interest
			interest = (principal * rate * days) / 365;

			// Display the result
			printf("The interest charge is $%.2lf\n", interest);
		}
		else {
			return 0;
		}
	} while (principal != -1);
}