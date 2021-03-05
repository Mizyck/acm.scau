#include "stdio.h"

int fanc(int x)
{
    int mul = 1;
    if (x > 1)
    {
        mul = x * fanc(x - 1);
    }
    return mul;
}
                  
main()
{    int n;
    scanf("%d", &n);
    printf("%ld", fanc(n));
}
