#include <stdio.h>
#include <math.h>
int main()
{
   char array[4];
   int i;
   for (i = 100; i < 1000; i++)
   {
      sprintf(array, "%d", i);
      if (pow(array[0] - '0', 3) + pow(array[1] - '0', 3) + pow(array[2] - '0', 3) == i)
      {
         printf("%s\n", array);
      }
   }
   return 0;
}
