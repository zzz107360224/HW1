#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number1, number2;
	printf("輸入兩個數字:  ");
	scanf_s("%d%d", &number1, &number2);
	if (number1%number2 == 0)
	{
		printf("%d是%d的倍數", number1, number2);
	}
	else
	{
		printf("%d不是%d的倍數", number1, number2);
	}


	system("pause");

}