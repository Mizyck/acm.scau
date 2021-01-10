#include <stdio.h>
int main()
{
    int num[15];
    float x;
    int i, y = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 10; i++)
    {
        x += num[i];
    }
    x /= 10.0;
    for (i = 0; i < 10; i++)
    {
        if (x < num[i])
        {
            y++;
        }
    }
    printf("%d", y);
    return 0;
    
    
    
}
