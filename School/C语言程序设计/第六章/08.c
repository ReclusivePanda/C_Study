//带注释
#include<stdio.h>
#include<conio.h>
#define M 100 //能接收的最大数组 （define 定义常量，使用const也可以定义常量，用法：const type variable = value;
#define N 100 // 通常的，常量用大写英文字母表示Google编程规范要在常量前加k，后加大写名称

int main() //主函数，推荐使用这种写法，（大可忘记 void main()这种写法）
{
    // const int M = 100; 定义常量的另一种形式
    int arr[M][N],t[N];  //创建两个数组，arr数组存储矩阵，t数组作为临时储存数据的数组
    int i,j,min,max,m,n,k,sum,count; //声明并定义变量 （看看数据类型的知识
    min=max=count=0; //变量初始化，注意，初始化某些变量是必要的，但是有些时候初始化变量可能会导致你忽略一些问题

    //输入部分：输入数组的行数和列数
    printf("enter array rows:    "); //输入矩阵的行数
    scanf("%d",&m);                   //注意scanf用法 int scanf(const char *format, ...)
    printf("enter array columns：");  //输入矩阵的列数
    scanf("%d",&n);

    //输入部分：输入一个m*n的数组(所见即所得)
    for(i=0; i<m; i++){       //外层循环控制当前输入位置在矩阵的第几行
        printf("the %d row:(enter %d numbers）\n",i+1,n);
        for(j=0; j<n; j++){   //内层循环控制：在当前行时，输入位置在第几列 
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
    for(j=0; j<m; j++)  //最外层循环 
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
