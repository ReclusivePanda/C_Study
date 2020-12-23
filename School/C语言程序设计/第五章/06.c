//C语言作业_第5章_06
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	double n = 1, sum = 0;
	int i;
    for (i = 1; i <= 20; i++)
    {
          n *= i;
          sum += n;
     }
     printf("%lf",sum);
 _getch();
 return 0;
}
