#include <stdio.h>
#include <ctype.h>
int main()
{
    int i = 0, j = 0;
    int a = 0;
    char ch[1000];
    
    while (ch[i - 1] != '\n')
    {
        ch[i] = getchar();
        if (isalpha(ch[i]))
        {
            j = 1;
        }
        else if ((isalpha(ch[i - 1]) || ispunct(ch[i - 1])) && (ch[i] == ' ' || ch[i] == '\n'))
        {
            j = 0;
            a++;
        }
        i++;
    }
    printf("%d", a);
    return 0;
}
