#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, e,f;
	printf("�@��Ѫ��`���{��:");
	scanf_s("%f", &a);
	printf("�T�o�@����/�[�ڦh�ֿ�:");
	scanf_s("%f", &b);
	printf("�����@����/�[�گ��p�h�֤���:");
	scanf_s("%f", &c);
	printf("�@�Ѫ������O:");
	scanf_s("%f", &d);
	printf("�@�Ѫ��q��O(�L���O):");
	scanf_s("%f", &e);
	f = (a*b / c + d + e);
	printf("�@��Ѫ᪺��:%f\n",f);
	










	system("pause");
}