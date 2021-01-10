#include <stdio.h>
#include <math.h>
double cal(float, float, float);
int main()
{
    float d, p, r;
    double m;
    scanf("%f %f %f", &d, &p, &r);
    m = cal(d, p, r);
    if (m == -1)
    {
        printf("God");
        return 0;
    }
    
    printf("%.1lf", m);
    return 0;

}
double cal(float d, float p, float r)
{
    double m;
    if (0 < p - d * r || 1 != 1 + r)
    {
        m = log(p / (p - d * r)) / log(1 + r);
        return m;
    }
    else
    {
        return -1;
    }
}
