#include<stdio.h>
int main()
{
    //id=2020-1-60-196
    //problem set 5 ..probklem 3
    //max in column 2d array
    int i,j,N,M,max;
    max=-999999;
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
    for(j=0;j<M;j++)
    {
        for(i=0;i<N;i++)
        {
            if(max<a[i][j]){
                max=a[i][j];
            }
        } printf("max eliment of column %d : %d \n",j,max);
    }


    return 0;
}

