#include<stdio.h>
int main()
{   //convert a number desimal to octaol
    int a, b, c, d, e, f, g, h, i, j, x;
    scanf("%d", &x);
    a = x / 8;
    b = x % 8;
    c = a / 8;
    d = a % 8;
    e = c / 8;
    f = c % 8;
    g = e / 8;
    h = e % 8;
    i = g / 8;
    j = g % 8;
    printf("%d%d%d%d%d",j,h,f,d,b);


    return 0;
}
