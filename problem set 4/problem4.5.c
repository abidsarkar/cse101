#include<stdio.h>
int main()
{
    int N,i,sum=0;
    printf("input array size=");
    scanf("%d", &N);
    int a[N];
    printf("number: ");
    for(i=0; i<N; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<N; i++)
    {
        sum=sum+a[i];
    }
    printf("sum= %d \n",sum);
    float avg;
    avg=(float)sum/N;
    printf("avg=%.2f",avg);
    return 0;
}
