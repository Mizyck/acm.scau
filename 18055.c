#include <stdio.h>
int main ()
{
    int array[10][10];
    int i, j, sum;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    sum = array[0][0] + array[1][1] + array[2][2];
    printf("%d\n", sum);
    return 0;
}
