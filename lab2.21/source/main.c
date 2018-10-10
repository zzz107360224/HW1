#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;

	printf("(正方形)\n");
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{

			if ((i == 0) || (i == 8) || (j == 0) || (j == 8))
			{
				printf("*");
			}
			
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("(圓形)\n");

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (i == 2 || i == 3 || i == 4 || i == 5 || i == 6)
			{
				if (j == 0 || j == 6)

					printf("*");


				else
				{
					printf(" ");
				}
			}
			if (i == 1 || i == 7)
			{
				if (j == 1 || j == 5)
				{
					printf("*");
				}

				else
				{
					printf(" ");
				}
			}
			if (i == 0 || i == 8)
			{
				if (j == 2 || j == 3 || j == 4)
				{
					printf("*");
				}

				else
				{
					printf(" ");
				}
			}



		}
		
		printf("\n");
	}
	printf("(箭頭)\n");

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (i == 0   || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8)
			{
				if (j == 3)
					printf("*");
				else
					printf(" ");
			}
			if (i == 1 )
			{
				if (j == 2 || j == 3 || j == 4)
					printf("*");
				else
					printf(" ");
			}
			if (i == 2)
			{
				if (j == 2 || j == 3 || j == 4 || j == 1 || j == 5)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	printf("(菱形)\n");
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (i == 0 || i==8)
			{
				if (j == 4)
					printf("*");
				else
					printf(" ");
			}
			if (i == 1 || i==7)
			{
				if (j == 3 || j==5)
					printf("*");
				else
					printf(" ");
			}
			if (i == 2 || i==6)
			{
				if (j == 2 || j == 6)
					printf("*");
				else
					printf(" ");
			}
			if (i == 3 || i==5)
			{
				if (j == 1 || j == 7)
					printf("*");
				else
					printf(" ");
			}
			if (i == 4)
			{
				if (j == 0 || j == 8)
					printf("*");
				else
					printf(" ");
			}
			
		}
		printf("\n");
	}



		

	system("pause");
}