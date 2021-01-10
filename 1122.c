#include "stdio.h"
#include "string.h"
main()
{    
    char s[100]="";
    char a[30];
    gets(a);
    int i, j, num;
    j = strlen(a);
    for (i = 0; i < j; i++)
    {
        s[i] = a[i];
    }
    num = i;
    gets(a);
    j = strlen(a);
    for (i = 0; i < j; i++, num++)
    {
        s[num] = a[i];
    }
    gets(a);
    j = strlen(a);
    for (i = 0; i < j; i++, num++)
    {
        s[num] = a[i];
    }

    
                  
    printf("%s", s);
}
