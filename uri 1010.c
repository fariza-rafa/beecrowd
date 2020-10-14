#include <stdio.h>

int main()
{
    int a,b,d,e;
    float c,f,v;
    scanf("%d %d %f", &a, &b, &c);
    scanf("%d %d %f", &d, &e, &f);
    v = (b*c)+(e*f);
    printf("VALOR A PAGAR: R$ %.2f\n", v);
    return 0;

}
