#include <stdio.h>
int a[16] = {2, 3, 5, 7, 11, 13, 17, 23, 29, 31, 34, 71, 79, 97, 103};
void display()
{
    int i;
    for (i = 0; i < 16; i++)
        printf("%d ", a[i]);
}
int main()
{
    int x, y, i, j;
    scanf("%d", &x);
    for (i = 0; i < 15; i++)
    {
        if (i == 0)
        {
            if (a[0] > x)
            {
                for (j = 0; j < 16; j++)
                {
                    y = x;
                    x = a[j];
                    a[j] = y;
                }
                break;
            }
        }
        else if (a[i] > x && a[i - 1] <= x)
        {
            for (j = i; j < 16; j++)
            {
                y = x;
                x = a[j];
                a[j] = y;
            }
            break;
        }
        else if (a[14] <= x)
        {
            a[15] = x;
            break;
        }
    }

    display();
    return 0;
}
