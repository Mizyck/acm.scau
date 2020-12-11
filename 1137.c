#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x = 1, i;
    char str[20];
    
    while (x < 9999)
    {
        if (0 == x % 7)
        {
            sprintf(str, "%d", x);
            
            for (i = 0; i < 4; i++)
            {
                if (str[i] == '5')
                {
                    printf("%d\n", x);
                    break;
                }
            }
            
        }
        x++;
    }

}
