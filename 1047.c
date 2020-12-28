#include <stdio.h>
#include <stdbool.h>
void exchange(int *, int *);
int main()
{
    int num[20];
    int i, j;
    bool a;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 1; i < 10; i++)
    {
        a = false;
        for (j = 0; j < 9; j++)
        {
            if (num[j] >= num[j + 1])
            {
                exchange(&num[j], &num[j + 1]);
                a = true;
            }
        }
        if (a == false)
        {
            break;
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}
void exchange(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
