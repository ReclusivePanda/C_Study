//C语言作业_第5章_16
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	char diamond[7][7]={
		{'\0','\0','\0','*'},
		{'\0','\0','*','*','*'},
		{'\0','*','*','*','*','*'},
		{'*','*','*','*','*','*','*'},
		{'\0','*','*','*','*','*'},
		{'\0','\0','*','*','*'},
		{'\0','\0','\0','*'}};
	int i,j;
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			printf("%c",diamond[i][j]);
		}
		printf("\n");
	}
 _getch();
 return 0;
}
