#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a;
	printf("�п�J�@�ӼƦr: ");
	scanf_s("%d", &a);
	if (a % 2 == 1)
	{
		printf("%d�O�_��", a);
	}
	else
	{
		printf("%d�O����", a);
	}


	system("pause");
}
