//C语言作业_第5章_11
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	double total_m = 100.0;	//总高度
	double total_sum = 0.0;	//小球经历的米数
	int i;
	for (i = 0; i < 10; i++)
	{
		total_sum += total_m;
		total_m /= 2;
		total_sum += total_m;
	}
	total_sum -= total_m;	//第10次的反弹高度不计
	printf("小球总共经历%lf米, 第10次反弹%lf米\n", total_sum, total_m);
 _getch();
 return 0;
}
