#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	for (i = 0; i < 5;i++)
	{
		for (j = 0; j < (5-i-1); j++)
		{
			printf(" ");
		}
		for (j = 0; j < (1 + 2*i); j++)
		{
			printf("*");
		}
		printf("\n");
	}



	system("pause");
}