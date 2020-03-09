#include<stdio.h>
int main()
{
    int N,i,flage=0;
    int sum=0;
    printf("input array size=");
    scanf("%d", &N);
    int a[N];
    printf("number: ");
    for(i=0; i<N; i++){
        scanf("%d", &a[i]);
       }
    for(i=0;i<N;i++)
    {
        if(a[i]<0)
        {
            flage++;

        }
    }
    printf("%d",flage);
       return 0;
}
