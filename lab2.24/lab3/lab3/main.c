#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a;
	printf("請輸入一個數字: ");
	scanf_s("%d", &a);
	if (a % 2 == 1)
	{
		printf("%d是奇數", a);
	}
	else
	{
		printf("%d是偶數", a);
	}


	system("pause");
}
