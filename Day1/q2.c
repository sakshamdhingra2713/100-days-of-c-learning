#include <stdio.h>

int main()
{
    float a, b, c, s, d, m, q;

    printf("enter 1st number.: ");
    scanf("%f", &a);

    printf("enter 2nd number.: ");
    scanf("%f", &b);

    s = a+b;
    d = a-b;
    m = a*b;
    q = a/b;

    printf("sum.: %f\n", s);
    printf("difference.: %f\n", d);
    printf("product.: %f\n", m);
    printf("quotient.: %f\n", q);

    return 0;
}