#include<stdio.h>
int main()
{
    //array 5.9
    int i,j,M,N;
    //scan for row and coulmn hear M for row and N for coulmn
    printf("input row and coulmn number=\n");
    scanf("%d%d",&M,&N);
    int a[M][N];
    for(i=0; i<M; i++)//input 1st array eliment
    {
        for(j=0;j<N; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int X,Y;
    printf("input 2nd  row and coulmn=\n");
    scanf("%d%d",&X,&Y);
    int b[X][Y];
    for(i = 0;i < X; i++)//input 2nd array eliment
    {
        for(j = 0; j < Y; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(M*N!=X*Y)//this is for chak if new matrix posible or not
    {
        printf("not posible");
        return 0;
    }

    return 0;
}
