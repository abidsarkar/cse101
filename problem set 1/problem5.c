#include<stdio.h>
int main()
{
    //right to left swap
    printf("befor swap:");
    int a, b, c,d;
    //printf("a=%d b = %b c = %d\n", a, b, c);
    scanf("%d%d%d", &a, &b, &c);
    d = c;
    c = b;
    b = a;
    a = d;
    printf("a= %d b= %d c= %d", a, b, c);

    return 0;
}
