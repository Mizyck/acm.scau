#include <stdio.h>
int main()
{
    int i, min, num[20];
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    min = num[0];
    for (i = 0; i < 9; i++)
    {
        if (min >= num[i + 1])
        {
            min = num[i + 1];
        }
    }
    printf("%d", min);
    return 0;
}
