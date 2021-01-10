#include <stdio.h>
int main()
{
    int h, m, s;
    scanf("%d:%d:%d", &h, &m, &s);
    s += 20;
    if (s >= 60)
    {
        s -= 60;
        m++;
    }
    if (m >= 60)
    {
        m -= 60;
        h++;
    }
    if (h >= 24)
    {
        h -= 24;
    }
    printf("%02d:%02d:%02d", h, m, s);
    return 0;
}
