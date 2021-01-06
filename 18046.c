#include <stdio.h>
#include <ctype.h>
int main()
{
    int ch = 0, num = 0, space = 0, other = 0;
    char a;
    while ((a = getchar()) != '\n')
    {
        if (isalpha(a))
        {
            ch++;
        }
        else if (isdigit(a))
        {
            num++;
        }

        else if (isspace(a))
        {
            space++;
        }
        else if (ispunct(a))
        {
            other++;
        }
    }
    printf("%d %d %d %d", ch, num, space, other);
    return 0;
}
