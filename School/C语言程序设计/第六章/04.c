#include<stdio.h>
#include<conio.h>
#define N 6
int main()
{
    int i,j,t;
    int arr[N]={2,5,6,9,10};
    printf("enter your number: ");
    scanf("%d",&t);

    for(i=0; i<N; i++){
        if (t > arr[i]){
           for(j=N+1; j>i; j--){
               arr[j] = arr[j-1];
            }
        arr[i+1] = t;
        }
    }
    return 0;

}
