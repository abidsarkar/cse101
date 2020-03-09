#include<math.h>
#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int a;
    a = pow(x,6);
    printf("a:%d\n", a);
    float b, c;
    b = cos (x);
    printf("b:%f\n", b);
    c = sqrt(x);
    printf("c:%f", c);
    return 0;
}
