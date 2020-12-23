//C语言作业_第5章_03
#include<stdio.h>
#include<conio.h>
#include<math.h>
int gy(int a,int b);
int gb(int a,int b);
int main()
{
	int a=0,b=0,max_gy=0,min_gb=0;
	printf("输入两个整数，用“,”隔开\n");
	scanf("%d,%d",&a,&b);
	max_gy=gy(a,b);
	min_gb=gb(a,b);
	printf("最大公约数：%d\n",max_gy);
	printf("最小公倍数：%d",min_gb);
 _getch();
 return 0;
}
int gy(int a,int b)
{
	int max_gy=0,t=0;
	while(b!=0)
	{
		t = a%b;
		a = b;
		b = t;
	}
	max_gy = a;
	return max_gy;
}
int gb(int a,int b)
{
	int min_gb = 0,max_gy=0;
    max_gy = gy(a, b);
    min_gb = a * b / max_gy;
    return min_gb;
}
