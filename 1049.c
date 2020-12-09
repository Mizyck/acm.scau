#include <stdio.h>
#include <string.h>
int main()
{
    char num[500];
    int i, j, k = 0;
    gets(num);

    j = strlen(num);
    
    for (i = 0; i < j; i++)
    {
        k += num[i] - 48; 
    }

    printf("%d", k);

    return 0;

}
