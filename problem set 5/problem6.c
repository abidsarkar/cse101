#include<stdio.h>
int main()
{
    //problemset 5..problem 6
    int i,j,M,N,flage=0;
    printf("row & column=");
    scanf("%d%d",&M,&N);
    int a[M][N];
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
            if(a[i][j]==a[i][j]==1)
            {
                flage++;
            }
        }
    }
    if(flage==N)
    {
        printf("yes");
    }
    else{printf("No");}

    return 0;
}
