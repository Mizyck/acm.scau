#include <stdio.h>
float high(int);
float tan(int);
int main()
{
   float h = 0, t = 0;
   int n, i;
   scanf("%d", &n);
   h = high(n);
   t = tan(n);
   printf("%.3f %.3f", h, t);
   return 0;
}
float high(int n)
{
   int i;
   float h = 100, s = 0;
   for (i = 0; i < n; i++)
   {
      s += h;
      h = h / 2;
   }
   return s;
}
float tan(int n)
{
   int i;
   float h = 100;
   for (i = 0; i < n; i++)
   {
      h = h / 2;
   }
   return h;
}
