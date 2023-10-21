#include <stdlib.h>
#include <stdio.h>
int main() {
	float acc, bb, tch, tcr, cl, nbb;
	do {
		
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
				printf("Credit Limit Exceeded.\n");
			}
		}
		else { return 0; }
	} while (acc != -1);
}