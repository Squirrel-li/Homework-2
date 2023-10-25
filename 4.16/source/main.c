#include <stdio.h>
#include <stdlib.h>


int main()
{
	printf("(A):\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		puts("");
	}
	puts("");

	printf("(B):\n");
	for (int i = 9; i >= 0; i--)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		puts("");
	}
	puts("");

	printf("(C):\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < (10 - i); j++)
		{
			printf("*");
		}
		puts("");
	}
	puts("");

	printf("(D):\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < (9 - i); j++)
		{
			printf(" ");
		}
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		puts("");
	}


	system("pause");
	return 0;
}