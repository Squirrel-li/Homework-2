#include <stdio.h>
#include <stdlib.h>


int main()
{
	float saleDollar = 0;

	while (1)
	{
		float salary = 200;

		printf("Enter sales in dollers (-1 to end):");
		scanf("%f", &saleDollar);

		if (saleDollar == -1) break;

		salary += saleDollar * 0.09;

		printf("Salary is:\t%.2f\n", salary);
		puts("");
	}
	system("pause");
	return 0;
}