#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
//计算高精度加法
char cal(char *, int, char *, int);  //输入输出函数，应该没问题
int main()
{
    int i, x = 0, y = 0;
    

    char ch1[100], ch2[100];
    scanf("%s", ch1);
    scanf("%s", ch2);
    x = strlen(ch1);
    y = strlen(ch2);
    
    char num1[81] = {0};
    char num2[81] = {0};

    for (i = 0; i < x; i++)
    {
        num1[i] = ch1[i];
    }
    for (i = 0; i < y; i++)
    {
        num2[i] = ch2[i];
    }


    if (x < y)
    {
        cal(num2, y, num1, x);                     
    }
    else
    {
        cal(num1, x, num2, y);
    }
    return 0;
}

char cal(char *big, int m, char *small, int n)
{
    int sum[100] = {0};
    int i;
    for (i = 1; i <= n; i++)
    {
        if ((sum[i - 1] += ((big[m - i] - '0') + (small[n - i] - '0'))) >= 10)
        {
            sum[i - 1] -= 10;
            sum[i]++;
        }
    }
    for (; i <= m; i++)
    {
        if (m == n)
        {
            break;
        }
        if ((sum[i - 1] += big[m - i] - '0') >= 10)
        {
            sum[i - 1] -= 10;
            sum[i]++;
        }
    }

    for (; i >= 0; i--)
    {
        if (*(sum + i) == 0)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    for (; i >= 0; i--)
    {
        printf("%d", sum[i]);
    }
    return 0;
}
