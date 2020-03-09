#include<stdio.h>
int main()
{
    //id=2020-1-60-196
    //problem set 5..problem5
    //Write a C program that calculates the sparsity and density of a matrix.
    int i,j,M,N, total_element,flage;
    flage=0;
    printf("input row and column nymber=\n");
    scanf("%d%d",&M,&N);
    total_element = M * N;
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
            if(a[i][j]==0)
            {
                flage++;
            }
            }
            }
        printf("flage=%d\n",flage);
        printf("%d",flage);
        float sparsity,density,none0,zero;
        //flage=zero;
        none0=total_element - flage;
        sparsity=(float)flage/total_element;
        density=none0/total_element;
        printf("sparsity=%f.2\n",sparsity);
        printf("density=%f.2\n",density);

    return 0;
}
