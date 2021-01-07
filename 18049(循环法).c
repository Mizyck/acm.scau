#include <stdio.h>
#include <math.h>
double cal(double, double);
int main(void)
{
    float a;
    double b;
    scanf("%f", &a);
    b = cal(a, 2);
    printf("%.4lf", b);
}
double cal(double a, double x0)
{
    double x1, y;
    do
    {
        x1 = (x0 + a / x0) / 2;
        y = x1;
        x1 += x0;
        x0 = x1 - x0;
        x1 = x1 - x0;
    } while (fabs(y - x1) >= 1e-5);
    return y;
}
