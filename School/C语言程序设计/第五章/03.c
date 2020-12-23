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
