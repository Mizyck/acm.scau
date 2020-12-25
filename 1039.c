#include <stdio.h>
int b = 11;
void rfact(void);
int main(void)
{
    rfact();
    return 0;
}
void rfact(void)
{   
    b--;
    if (b > 0)
    {
        int a;
        scanf("%d\n", &a);
        rfact();
        printf("%d\n", a);
    }
    return;
}
