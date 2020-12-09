#include <stdio.h>

int main()
{
    char c[1000];
    int num = 0;
    int inword = 0;

    for (int i = 0; i < 1000; i++)
    {
        c[i] = getchar();
        if (c[i] == '\n')
        {
            break;
        }
        if (c[i] == ' ' && inword == 1)
        {
            inword = 0;
        }
        else if (c[i] != ' ' && inword == 0)
        {
            inword = 1;
            num++;
        }
    }

    printf("%d", num);
}
