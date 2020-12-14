#include <stdio.h>
#include <math.h>
int main()
{
    int x, y;
    scanf("%d", &x);
    y = sqrt(x);
    if (x == y * y)
    {
        printf("Y");
    }
    else
    {
        printf("N");
    }
    return 0;
}
    
    
