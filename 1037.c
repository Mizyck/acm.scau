#include <stdio.h>
int main()
{
	double x, i, num, z = 2, m = 1, y = 0;
	scanf("%lf", &x);

	for (i = 0; i < x; i++)
	{
		y += z / m;
		num = z;
		z = z + m;
		m = num;
	}

	printf("%.4f", y);
	
	return 0;
}
