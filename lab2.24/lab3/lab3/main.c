#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a;
	printf("叫块计: ");
	scanf_s("%d", &a);
	if (a % 2 == 1)
	{
		printf("%d琌计", a);
	}
	else
	{
		printf("%d琌案计", a);
	}


	system("pause");
}
