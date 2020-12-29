#include <stdio.h>
int main()
{
    int array[30];
    int i, j, num = 0;
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < 19; i++)
    {
        for (j = i + 1; j < 20; j++)
        {
            if (array[i] == array[j])
            {
                break;
            }
            if (j == 19)
            {
                num++;
            }
            if (i == 18)
            {
                num++;
            }
            
        }
    }
    printf("%d\n", num);
    
}
