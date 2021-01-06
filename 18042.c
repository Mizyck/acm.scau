#include <stdio.h>
#include <math.h>
int main(void)
{
    double x, y;
    scanf("%lf", &x);
    if (x < 1)
    {
        printf("%.2f", x);
    }
    if (1 <= x && x < 10)
    {
        printf("%.2f", 2 * x - 1);
    }
    if (x >= 10)
    {
        printf("%.2f", 3 * x - 11);
    }
    return 0;
}
