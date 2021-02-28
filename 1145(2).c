#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100] = {0}, array[100] = {0};
    int i, j;
    gets(ch);
    j = strlen(ch);
    for (i = 0; i < j;i++)
    {
        array[j - 1 - i] = ch[i];
    }
    i = 0;
    while (ch[i] == array[i] && i < j)
    {
        i++;
    }
    if (i == j)
    {
        printf("Y\n");
    }
    else
    {
        printf("N\n");
    }
    return 0;
}
