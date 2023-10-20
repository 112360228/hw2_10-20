#include <stdlib.h>
#include <stdio.h>
int main() {
	do {
		float acc, bb, tch, tcr, cl, nbb;
		printf("Enter accout number(-1 to end)¡G");
		scanf("%f", &acc);
		printf("Enter beginning balance¡G");
		scanf("%f", &bb);
		printf("Enter total charges¡G");
		scanf("%f", &tch);
		printf("Enter total credits¡G");
		scanf("%f", &tcr);
		printf("Enter credit limit¡G");
		scanf("%f", &cl);
		if (acc != -1) {
			printf("Account¡G\t %f\n", acc);
			printf("Credit limit¡G\t %f\n", cl);
			nbb = bb + tch - tcr;
			printf("Balance¡G\t %f\n", nbb);
			if (nbb > cl) {
				printf("Credit Limit Exceeded.");
			}
		}
		else { return 0; }
	} while (acc != -1);
}