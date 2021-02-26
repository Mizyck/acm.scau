#include "stdio.h"
#include "string.h"
main()
{
    char s[100] = "";
    char a[30];
    char ch;
    int i = 0, j = 0;
    for (i = 0; i < 3; i++)
    {
        while ((ch = getchar()) != '\n')
        {
            s[j++] = ch;
        }
    }

    printf("%s", s);
}
