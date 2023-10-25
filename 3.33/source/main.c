#include <stdio.h>
#include <stdlib.h>


int main()
{
	int w, h;
	scanf_s("%d%d", &w, &h);
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if ((i == 0 || i == (h - 1)) || (j == 0 || j == (w - 1)))
			{
				printf("+");
			}
			else
			{
				printf(" ");
			}
		}
		puts("");
	}
	system("pause");
	return 0;
}