#include <stdio.h>
#include <stdlib.h>

int main() {
	int paycode;
	float weeklypay;

	printf("enter the pay code for the employee(manager:1,hourly worker:2,commission worker:3,pieceworker:4,-1 to end):");
	scanf("%d", &paycode);

	if (paycode == -1)
	{
		return 0;
	}

	if (paycode == 1)
	{
		float manager;
		printf("enter the fixed weekly salary for the manager:$");
		scanf("%f", &manager);
		weeklypay = manager;
		printf("the weekly pay for the employee is $%.2f", weeklypay);
	}

	if (paycode == 2)
	{
		float hourly;
		int hour;
		printf("enter the fixed weekly salary for the hourly worker:$");
		scanf("%f", &hourly);
		printf("enter the number of hours worked by the worker:");
		scanf("%d", &hour);
		if (hour <= 40)
		{
			weeklypay = hourly * hour;
		}
		else
		{
			weeklypay = hourly * 40 + (hour - 40)*hourly*1.5;
		}
		printf("the weekly pay for the employee is $%.2f", weeklypay);
	}

	if (paycode == 3)
	{
		float commission;
		printf("enter the gross weekly sales for the commission worker:$");
		scanf("%f", &commission);
		weeklypay = 250 + commission * 0.057;
		printf("the weekly pay for the employee is $%.2f", weeklypay);
	}

	if (paycode == 4)
	{
		float piece;
		int number;
		printf("enter the fixed amount of money per item for the pieceworker:$");
		scanf("%f", &piece);
		printf("enter the number of the item produced by pieceworker:");
		scanf("%d", &number);
		weeklypay = piece * number;
		printf("the weekly pay for the employee is $%.2f", weeklypay);
	}
}
