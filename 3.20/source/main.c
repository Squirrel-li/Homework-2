#include <stdio.h>
#include <stdlib.h>


int main()
{
	while (1)
	{
		float hourWork, rate;
		float salary;

		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%f", &hourWork);

		if (hourWork == -1) break;
		printf("Enter hourly rate of the worker ($00.00)");
		scanf_s("%f", &rate);



		if (hourWork <= 40)
		{
			salary = hourWork * rate;
		}
		else
		{
			salary = 40 * rate + (hourWork - 40) * rate * 1.5;
		}
		printf("Salary is $%.2f\n", salary);
		puts("");
	}
	system("pause");
	return 0;
}