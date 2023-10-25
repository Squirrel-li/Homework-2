#include <stdio.h>
#include <stdlib.h>


int main()
{
	int w;
	printf("Enter an odd number:");
	scanf("%d", &w);

	while (w % 2 == 0)
	{
		printf("Enter an odd number:");
		scanf("%d", &w);
	}

	for (int i = 0; i < w; i++)
	{
		if (i < (w - 1) / 2)
		{
			for (int j = 0; j < (w - 1) / 2 - i; j++)
			{
				printf(" ");
			}
			for (int j = 0; j < 1 + i * 2; j++)
			{
				printf("*");
			}
		}
		if (i >= (w - 1) / 2)
		{
			for (int j = (w - 1) / 2; j < (w - 1) / 2 - i; j++)
			{
				printf(" ");
			}
			for (int j = 0; j < 1 + i * 2; j++)
			{
				printf("*");
			}
		}

		puts("");
	}
	system("pause");
	return 0;
}