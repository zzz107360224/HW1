#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number1, number2;
	printf("��J��ӼƦr:  ");
	scanf_s("%d%d", &number1, &number2);
	if (number1%number2 == 0)
	{
		printf("%d�O%d������", number1, number2);
	}
	else
	{
		printf("%d���O%d������", number1, number2);
	}


	system("pause");

}