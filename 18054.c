#include <stdio.h>
int main()
{
    int array[20];
    int i, j, a, b = 0;
    for (i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            scanf("%d", &array[b++]);
        }
        if (i > 0)
        {
            scanf("%d", &a);
            for (j = 0; j < i; j++)
            {
                if (a == array[j])
                {
                    break;
                }
                if (j == i - 1)
                {
                    array[b++] = a;
                }
            }
        }
    }
    for (i = 0; i < b; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
    
}
