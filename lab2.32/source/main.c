#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float hight, weight,BMI;
	printf("��J�A������(����):  ");
	scanf_s("%f", &hight);
	printf("��J�A���魫(����):  ");
	scanf_s("%f", &weight);
	BMI = weight / (hight*hight);
	printf("BMI=%f\n", BMI);
	if (BMI<18.5)
	
		printf("underweight\n");
	
	 else if ( BMI <= 24.9)
	
		printf("normal\n");
	
	 else if ( BMI <= 29.9)
	
		printf("overweight\n");
	
	 else 
	
		printf("obese\n");
	


	system("pause");

}