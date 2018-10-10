#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if ( i == 1 || i == 2 || i == 3)
			{
				if (j == 8 || j == 5)
					printf("P");
				else
					printf(" ");
			}
			if(i ==4) 
			{
				if (j == 7 || j == 6)
					printf("P");
				else
					printf(" ");
			
			
			}
			if (i == 0)
			{
				if (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8)
					printf("P");
				else
					printf(" ");
			}
		}

		printf("\n");
	}

		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 9; j++)
			{
				if (i == 0)
				{
					if (j == 2 || j == 3)
						printf("J");
					else
						printf(" ");
				}
				if (i ==1 || i==3)
				{
					if (j == 1 )
						printf("J");
					else
						printf(" ");
				}
				if (i == 2)
				{
					if (j == 0 )
						printf("J");
					else
						printf(" ");
				}
				if (i == 4)
				{
					if (j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8 )
						printf("J");
					else
						printf(" ");
				}
			}
			printf("\n");
		}
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 9; j++)
			{
				if (i == 0)
				{
					if (j==0 || j==1 || j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8)
						printf("D");
					else
						printf(" ");
				}
				if (i == 1 || i==2 )
				{
					if (j == 0 || j==8)
						printf("D");
					else
						printf(" ");
				}
			
				if (i == 3)
				{
					if (j == 1 || j == 7 )
						printf("D");
					else
						printf(" ");
				}
				if (i == 4)
				{
					if (j == 2 || j == 3 || j == 4 || j == 5 || j == 6 )
						printf("D");
					else
						printf(" ");
				}
			}
			printf("\n");
		}
	



	system("pause");
}