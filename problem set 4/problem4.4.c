#include<stdio.h>
int main()
{
    int N,i,flage1=0,flage2=0;
    int sum=0;
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
        if(a[i]<0)
        {
            flage1++;
        }
        if(a[i]>0)
        {
            flage2++;
        }
    }
    if(flage1>flage2)
    {
        printf("mejor negetive");
    }
    else if(flage2>flage1)
    {
        printf("mejor positive");
    }
    else{printf("nutrel");}
    return 0;
}
