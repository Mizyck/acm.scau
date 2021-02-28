#include <stdio.h>
#include <string.h>
int main()
{
    char ch1[50], ch2[50];
    int i, j, l1, l2, p, m, n;
    gets(ch1);
    gets(ch2);
    l1 = strlen(ch1);
    l2 = strlen(ch2);
    for (i = 0; i < l1 - l2 + 1; i++)
    {
        j = 0;
        if(ch1[i] == ch2[j])
        {
            p = i;
            for (; j < l2; j++)
            {
                if (ch1[p] == ch2[j])
                {
                    p++;
                    continue;
                }
                else
                {
                    break;
                }
            }
            if (p == i + l2)
            {
                printf("%d", p - l2 + 1);
                break;
            }
        }
    }
    return 0;
}
