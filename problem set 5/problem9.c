#include<stdio.h>
int main()
{
    //array 5.9
    int i,j,M,N,X=20,Y=20;
    //scan for row and coulmn hear M for row and N for coulmn
    printf("input row and coulmn number=\n");
    scanf("%d%d",&M,&N);
    int a[M][N];
    int b[X][Y];
    //this line for taking array eliment input.
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            //LOGIC DITE Hobe jeno i ar j er mane gula thik thake
            for(i=(M-1);i<M;i++)
            {
                for(j=(N-1);j<M;j++)
                {
                    b[i][j]=a[i][j];
                }printf("%d",b[i][j]);
            }
        }
    }
    return 0;
}
