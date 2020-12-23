//C语言作业_第5章_08
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a, b, c, i;
	for ( i = 100; i <= 999; i++)
	{
		a = i / 100;
		b = (i / 10) % 10;
		c = i % 10;
		if (a * a * a + b * b * b + c * c * c == i)
		{
			printf("%d\n", i);
		}
	}
 _getch();
 return 0;
}
