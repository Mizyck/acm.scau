#include <stdio.h>
#include <string.h>
int main()
{
    char str[85], cmpe[85];
    int i, m, n;
    memset(str, 0, sizeof(char) * 85);
    memset(cmpe, 0, sizeof(char) * 85);
    gets(str);
    n = strlen(str);
    m = n;
    for ( i = 0; i < n; i++)
    {
        cmpe[i] = str[--m];
    }
    m = 1;
    for ( i = 0; i < n; i++)
    {
        if (cmpe[i] == str[i])
        {
            continue;
        }
        else
        {
            m = 0;
            printf("N\n");
            break;
        }
    }
    if (m == 1)
    {
        printf("Y\n");
    }
    return 0;
}
