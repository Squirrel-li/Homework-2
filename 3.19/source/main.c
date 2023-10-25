#include <stdio.h>
#include <stdlib.h>


int main()
{
	while (1)
	{
		float lonePrincipal, interestRate;
		int termOfTheLoan;
		float interest;

		printf("Enter loan principal:");
		scanf("%f", &lonePrincipal);

		if (lonePrincipal == -1) break;

		printf("Enter interest rate:");
		scanf("%f", &interestRate);
		printf("Enter term of the loan in day:");
		scanf("%d", &termOfTheLoan);

		interest = (lonePrincipal * interestRate * termOfTheLoan) / 365;

		printf("The interest Charge is %.2f\n", interest);

		puts("");
	}
	system("pause");
	return 0;
}