#include <stdio.h>
int cal(int n)
{
    if (n > 1)
    {
        n = n * cal(n - 1);
    }
    return n;
}

int main()
{
    int x, y;
    scanf("%d", &x);
    y = cal(x);
    printf("%d", y);
    return 0;
}
