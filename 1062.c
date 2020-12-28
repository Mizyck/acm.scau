#include <stdio.h>
int main()
{
    int a[10], b[10], c[10];
    int i;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &c[i]);
    }
    for (i = 0; i < 4; i++)
    {
        printf("%d %d %d\n", a[i], b[i], c[i]);
    }
    return 0;
    
    
    
}
