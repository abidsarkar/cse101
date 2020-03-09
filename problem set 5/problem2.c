#include<stdio.h>
int main()
{
    //id=2020-1-60-196
    //problem set 5 ..probklem 2
    //max in row 2d array
    int i,j,N,M,max;
    printf("inter colam and row=");
    scanf("%d %d",&N,&M);
    int a[N][M];
        for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<N;i++)
    { max=-999999;
        for(j=0;j<M;j++)
        {
            if(max<a[i][j]){
                max=a[i][j];
            }
        } printf("max eliment of row %d : %d \n",i,max);
    }
    return 0;
}
