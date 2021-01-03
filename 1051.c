#include <stdio.h>
int main(void)
{
    int flag;
    int h = 0, l;
    int i, j;
    int array[3][4];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        flag = 1;
        l = 0;
        for (j = 1; j < 4; j++)
        {
            if (array[i][j] > array[i][l])
            {
                l = j;
            }
        }
        for (j = 0; j < 3; j++)
        {
            if (array[j][l] < array[i][l])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d", array[i][l]);
            return 0;
        }
    }
    printf("NO\n");
    return 0;
    
    
}
