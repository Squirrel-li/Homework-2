#include <stdio.h>
#include <stdlib.h>


int main()
{
	float investment, rate, interest;
	rate = 0.1;

	for (int i = 0; i < 5; i++)
	{
		investment = 5000;
		interest = investment;

		for (int j = 0; j < 15; j++)
		{
			interest *= 1 + rate;
		}
		printf("For an interest rate of %.1f%%, the final amount will be %.2f\n", rate * 100, interest);
		rate += 0.005;
	}
	system("pause");
	return 0;
}