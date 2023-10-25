#include <stdio.h>
#include <stdlib.h>


int main()
{
	int accountNumber = 0;

	while (1)
	{
		float BeginBalance, totalCharge, totalCredits, creditLimit;
		float balance = 0.0;

		printf("Enter account number (-1 to end):");
		scanf("%d", &accountNumber);

		if (accountNumber == -1) break;

		printf("Enter beginning balance:");
		scanf("%f", &BeginBalance);
		printf("Enter total Charges:");
		scanf("%f", &totalCharge);
		printf("Enter total credits:");
		scanf("%f", &totalCredits);
		printf("Enter credit limit:");
		scanf("%f", &creditLimit);

		balance = BeginBalance + totalCharge - totalCredits;

		if (balance > creditLimit)
		{
			printf("Account:\t%d\n", accountNumber);
			printf("Credit limit:\t%.2f\n", creditLimit);
			printf("balance:\t%.2f\n", balance);
			printf("Credit Limit Exceeded.\n");
		}
		puts("");
	}
	system("pause");
	return 0;
}