#include <stdio.h>
int main()
{
    char ch;
    ch = getchar();
    if (ch == '0')
    {
        printf("first %c\n", ch + 1);
    }
    else if (ch == '9')
    {
        printf("%c last\n", ch - 1);
    }
    else if(ch > '0' && ch < '9')
    {
        printf("%c %c\n", ch - 1, ch + 1);
    }
    else
    {
        printf("error\n");
    }
    return 0;
}
