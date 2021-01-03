#include <stdio.h>

int sum(int n)
{
    int i, num = 0;
    char array[10] = {0};
    sprintf(array, "%d", n);
    for (i = 0; i < 10; i++)
    {
        if(array[i] == 0)
        {
            break;
        }
        num += array[i] - 48;
    }
    return num;
}

main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
}
