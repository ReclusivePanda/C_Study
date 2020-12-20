#include<stdio.h>
#include<conio.h>
#define M 100 //能接收的最大数组
#define N 100 //

int main()
{
    int arr[M][N],t[N];
    int i,j,min,max,m,n,k,sum,count;
    min=max=count=0;

    //输入部分：输入数组的行数和列数
    printf("enter array rows:    ");
    scanf("%d",&m);
    printf("enter array columns：");
    scanf("%d",&n);

    //输入部分：输入一个m*n的数组(所见即所得)
    for(i=0; i<m; i++){
        printf("the %d row:(enter %d numbers）\n",i+1,n);
        for(j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //打印输入的数组：
    printf("The array is：\n");
    for(i=0; i<m; i++){
        printf("\n");
        for(j=0; j<n; j++)
        printf("%3d",arr[i][j]);
    }

    //处理数据：判断鞍点
    for(j=0; j<m; j++)
    {
        max = arr[j][0];
        for(i=0; i<n; i++)
        {
            if(arr[j][i] > max)
            max = arr[j][i];
        }

        sum = 0;
        for(i=0; i<n; i++)
        {          //最大值所在列存入数组t中
            if( arr[j][i]==max )
            {
                t[sum] = i;
                sum ++;
            }
        }

        min = max;
        for(i=0; i<sum; i++)
        {
            for(k=0; k<m; k++)
            {
                if(min>arr[k][t[i]])
                {
                    break;
                }
            }
            if( k==m ){
                printf("\nSaddle point %d is on row %d,column%d.",arr[j][t[i]],j+1,t[i]+1);
                count++;
            }
        }
    }
    if(count == 0)
    printf("\nthere is no saddle point");
    _getch();
    return 0;
}
