#include <stdio.h>
#include <math.h>
int main()
{
	float x = 0.0000F, y = 0.0000F;
	scanf("%f,%f", &x, &y);
	if (fabs(pow(x, 2) + pow(y, 2) - 1) < 0.001)
	{
		printf("Y");
	}
	else
	{
		printf("N");
	}
	return 0;
	

}
