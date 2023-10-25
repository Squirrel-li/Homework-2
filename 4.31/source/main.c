#include <stdio.h>
#include <stdlib.h>

const int w = 9;

int main()
{
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
			for (int j = (w - 1) / 2; j < i; j++)
			{
				printf(" ");
			}
			for (int j = 0; j < ((w - i - 1) * 2 + 1); j++)
			{
				printf("*");
			}
		}

		puts("");
	}
	system("pause");
	return 0;
}