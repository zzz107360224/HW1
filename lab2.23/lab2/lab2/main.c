#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c,d;
	
		printf("��J�T�ӼƦr:   \n");
		scanf_s("%d %d %d", &a, &b, &c);
		if (c > a)
		{
			d = a;
			a = c;
			c = d;
			if (b > a)
			{
				d =a;
				a = b;
				b = d;
					
				
			}
			if (c > b)
			{
				d = c;
				c = b;
				b = d;
			}
			
			
			
		}
		if (a > c)
		{
			if (b> a)
			{
				d = b;
				b = a;
				a = d;
				

			}
			if (c > b)
			{
				d = c;
				c = b;
				b = d;
			}
		}
		printf("�̤j���Ʀr�O:%d\n",a);
		printf("�̤p���Ʀr�O:%d\n", c);
		



		system("pause");
}