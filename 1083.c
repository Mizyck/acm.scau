#include "stdio.h"
int fanc(int n)
{
    if (n > 1)
    {
        n = n * fanc(n - 1);
    }
    else
    {
        n = 1;
    }
    return n;
}
main()
{
    int n;
    scanf("%d", &n);
    printf("%ld", fanc(n));
}
