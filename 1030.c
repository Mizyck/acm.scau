#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch, lower;
    int i;
    while ((ch = getchar()) != '\n')
    {
        if (isupper(ch))
        {
            lower = tolower(ch);
            putchar(lower);
        }
        else
        {
            putchar(ch);
        }
        
    }
    return 0;
}
