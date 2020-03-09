#include<stdio.h>
int main()
{
    /*id=2020-1-60-196
    problemset 5..problem 4
    Write a C program that asks the user
    to enter m (number of rows) and n (number of columns) and creates
    a new array with the first m rows
    and n columns of the input array.*/
    int i,j,M,N,x,y;
    printf("input row and column nymber=\n");
    scanf("%d%d",&M,&N);
    int a[M][N];
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&a[i][j]);
        }
        }
    printf("new array row and column=\n");
    scanf("%d%d",&x,&y);
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }



    return 0;
}
