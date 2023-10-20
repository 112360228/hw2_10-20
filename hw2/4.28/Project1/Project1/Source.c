#include <stdio.h>

int main() {
	int paycode;
	double weeklyPay = 0.0;

	printf("Enter the paycode for the employee (1 for Managers, 2 for Hourly Workers, 3 for Commission Workers, 4 for Pieceworkers): ");
	scanf("%d", &paycode);

	switch (paycode) {
	case 1:
		// Manager
		printf("Enter the fixed weekly salary for the manager: $");
		double managerSalary;
		scanf("%lf", &managerSalary);
		weeklyPay = managerSalary;
		break;

	case 2:
		// Hourly Worker
		printf("Enter the hourly wage for the hourly worker: $");
		double hourlyWage;
		scanf("%lf", &hourlyWage);
		printf("Enter the number of hours worked by the hourly worker: ");
		double hoursWorked;
		scanf("%lf", &hoursWorked);

		if (hoursWorked <= 40) {
			weeklyPay = hoursWorked * hourlyWage;
		}
		else {
			double overtimeHours = hoursWorked - 40;
			weeklyPay = (40 * hourlyWage) + (overtimeHours * 1.5 * hourlyWage);
		}
		break;
	case 3:
		// Commission Worker
		printf("Enter the gross weekly sales for the commission worker: $");
		double grossSales;
		scanf("%lf", &grossSales);
		weeklyPay = 250 + (0.057 * grossSales);
		break;

	case 4:
		// Pieceworker
		printf("Enter the number of items produced by the pieceworker: ");
		double producedItems;
		scanf("%lf", &producedItems);
		printf("Enter the payment per item for the pieceworker: $");
		double paymentPerItem;
		scanf("%lf", &paymentPerItem);
		weeklyPay = producedItems * paymentPerItem;
		break;

	default:
		printf("Invalid paycode entered!\n");
		return 1; // Exit with an error code
	}

	printf("Weekly pay for the employee is: $%.2f\n", weeklyPay);

	return 0;
}