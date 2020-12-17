#include <stdio.h>
int prinum(int a);
int main()
{
    int i;
    for (i = 2; i < 200; i++)
    {
        prinum(i);
    }
    return 0;
    
}


int prinum(int a)
{

    int i = 1;
    while (++i <= a)
    {
        if (0 == a % i && a != 2)
        {
            break;
        }
        if (a == 2)
        {
            printf("2\n");
            break;
        }
        if (0 != a % i && a == i + 1 && a != 2)
        {
            printf("%d\n", a);
            break;
        }
    }
}



