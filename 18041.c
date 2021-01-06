#include <stdio.h>
#include <math.h>
int main(void)
{
    float d, p, r, m;
    scanf("%f %f %f", &d, &p, &r);
    if (d == 0)
    {
        printf("0.0\n");
        return 0;
    }
    if ((p / (p - d * r)) <= 0 || (1 + r) <= 0 || (1 + r) == 1)
    {
        printf("God\n");
        return 0;
    }
    
    m =  (log (p / (p - d * r)) / log (1 + r));
    printf("%.1f", m);
    return 0;
}
