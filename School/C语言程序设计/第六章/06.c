#include<stdio.h>
#include<conio.h>
#define N 10
int main()
{
    // int n;
    // scanf("");
    int i,j,t;
    int arr[N][N] = {0};

    for(i=0; i<N; i++){
        arr[i][0] = 1;
        arr[i][i] = 1;
        if( i>1 ){
            for(j=1; j<i; j++)
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
         }
    }

    for(i=0; i<N; i++){
        printf("\n\n");
       for(j=0; j<i+1; j++){
       printf("%4d",arr[i][j]);
       }
    }
    _getch();
    return 0;
}
