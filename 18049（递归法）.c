#include <stdio.h>
#include <math.h>
double cal(double, double);
int main(void)
{
    float a;
    double b;
    scanf("%f", &a);
    b = cal(a, a / 2);
    printf("%.4lf", b);
}
double cal(double a, double x0)
{
    double x1, y;
    x1 = (x0 + a / x0) / 2;
    if (fabs(x1 - x0) < 0.00001)
    {
        y = x1;
    }
    else
    {
        y = cal(a, x1);
    }
    return y;
}
