#include<stdio.h>
#include<conio.h>
// #define N 3
//已扩展为n*n矩阵对角线和
int main()
{
    int i,j,t,cout;
    cout = 0;
    int N;  
     
    printf("please enter your matrix width:");
    scanf("%d",&N);
    printf("please enter your %d * %d matrix\n",N,N);
    int matrix[N][N];

    printf("please enter matrix: \n");
    for(i=0; i<N; i++){
        printf("\n");
      for(j=0; j<N; j++){
      scanf("%d",&matrix[i][j]);
      }
    }
    
    for(i=0; i<N; i++){
        t = N - i;
        cout += matrix[i][i];
    }
    for(i=0; i<N; i++){
        t = N - i -1;
        cout += matrix[i][t];
    }

    printf("\ncout_diagonal = %d",cout);

    _getch();
    return 0;
}
