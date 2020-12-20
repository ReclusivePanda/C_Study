#include<stdio.h>
#include<conio.h>
#define N 100

int main()
{
    int i,j,t;
    i=0,j=0,t=0;
    int arr[N]={0};

    for( i = 0; i < N; i++ ){
        arr[i] = i + 1;
    }


    for( i=1; i < N-1; i++ ){
      for( j=i+1; j < N; j++ ){
        if(arr[j]!=0 && arr[i]!=0)
        if(arr[j] % arr[i] == 0){
        arr[j] = 0;
        }     
      }
    }

    for(i=0;i<N;i++){
      if (arr[i] != 0)
      printf ("%d\t",arr[i]);
    }

    _getch();
    return 0;
}
