#include <stdio.h>
int main(void)
{
    int a, b, i;
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a);
        if (i > 0 && a < b)
        {
            continue;
        }
        b = a;
    }
    printf("%d", b);
    return 0;
}
