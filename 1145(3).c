#include "stdio.h"
#include "string.h"
int main()
{
    int n;
    char a[100];
    memset(a, 0, sizeof(char) * 100);
    gets(a);
    int i, j, flag;
    n = strlen(a);
    i = 0;
    j = n - 1;
    flag = 0;
    while ((flag < 2) && ((i + 1) <= (j - 1)))
    {
        if (a[i] == a[j])
        {
            i++;
            j--;
        }
        else if (a[i] == a[j - 1])
        {
            flag++;
            i++;
            j -= 2;
        }
        else if (a[i + 1] == a[j])
        {
            flag++;
            i += 2;
            j--;
        }

        else
            flag = 2;
    }
    if (flag < 2)
        printf("Y");
    else
        printf("N");
    return 0;
}
