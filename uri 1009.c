#include <stdio.h>

int main()
{
    char a;
    double b,c,t;
    scanf("%s", &a);
    scanf("%lf %lf", &b, &c);
    t = b+c*0.15;
    printf("TOTAL = R$ %.2lf\n", t);
    return 0;
}
