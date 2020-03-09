#include<stdio.h>
int main()
{
    int i,x,N,j=0;
    printf("input the number of array=\n");
    scanf("%d",&N);
    int a[N];
    for(i=0; i<N; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("the number have to find=");
    scanf("%d",&x);
    for(i=0;i<N;i++)
    {
        if(x==a[i])
        {
           j=i;
        }
    }
    printf("%d",j);

    return 0;
}
