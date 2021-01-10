#include <stdio.h>
#include <math.h>
int main()
{
    float i, j, n;
    int num;
    scanf("%f", &n);
    for (i = 1; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            num = sqrt(i * i + j * j);
            if (num * num == i * i + j * j && num <= n)
            {
                printf("%.0f %.0f %d\n", i, j, num);
                continue;
            }
        }
    }
    return 0;
}
