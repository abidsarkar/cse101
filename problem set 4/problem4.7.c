#include<stdio.h>
int main()
{

    int i,N,min1=99999,min2=99999;
    printf("input the number of array=\n");
    scanf("%d",&N);
    int a[N];
    for(i=0; i<N; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<N;i++)
    {
        if(min1>a[i])
        {
            min1=a[i];
        }
    }
    printf("min = %d \n", min1);
    for(i=0;i<N;i++)
    {
        if( min2> a[i] && a[i]!= min1)
        {
            min2=a[i];
        }
    }
    printf("2nd min = %d\n",min2);

    return 0;
}
