#include<stdio.h>
#include<conio.h>
#define N 10
int main()
{
    int i,j,t;
    int arr[N]={0};

    for( i=0; i<10; i++ )
      scanf("%d",&arr[i]);

    for(i=0; i<N-1; i++){
      for(j=i+1; j<N; j++){
        if(arr[i] > arr[j]){
            t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
      }
    }

    for(i=0; i<N; i++){
        printf("%3d",arr[i]);
    }

    _getch();
    return 0;
}
