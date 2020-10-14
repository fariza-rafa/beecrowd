#include <stdio.h>

int main()
{
    int R;
    double v;
    scanf("%d", &R);
    v = (4.0/3)*3.14159*R*R*R;
    printf("VOLUME = %.3lf\n", v);
    return 0;
}
