#include<stdio.h>
int main()
{   //convert a number desimal to binari
    int a, b, c, d, e, f, g, h, i, j, x;
    printf("desimel =", x);
    scanf("%d", &x);
    a = x / 2;
    b = x % 2;
    c = a / 2;
    d = a % 2;
    e = c / 2;
    f = c % 2;
    g = e / 2;
    h = e % 2;
    i = g / 2;
    j = g % 2;
    printf("bainary = %d%d%d%d%d",j,h,f,d,b);


    return 0;
}
