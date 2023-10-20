#include <stdio.h>

int main() {
	int numEmployees = 1;

	do {
		for (int i = 1; i <= numEmployees; i++) {
			double hourlyRate, hoursWorked, grossPay;

			printf("Enter # hours worked (-1 to end): ");
			scanf("%lf", &hoursWorked);

			printf("\nEnter the hourly rate of the worker ($00.00):");
			scanf("%lf", &hourlyRate);

			if (hoursWorked <= 40) {
				grossPay = hourlyRate * hoursWorked;
			}
			else {
				grossPay = (40 * hourlyRate) + ((hoursWorked - 40) * hourlyRate * 1.5);
			}

			printf("Salary is $%.2lf\n", grossPay);
		}
	} while (hoursWorked != -1);
	return 0;
}