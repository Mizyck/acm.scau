#include <stdio.h>
int main()
{
	int i = 0, j;
	int x;
	char rep[20];
	while (i < 9)
	{
		rep[i] = i + 49;
		i++;
	}
	

	scanf("%d", &x);
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < x - i - 1; j++)
		{
			printf(" ");
		}

		for (j = 0; j < i + 1; j++)
		{
			printf("%c", rep[j]);
		}
		j--;

		while (--j >= 0)
		{
			printf("%c", rep[j]);
		}
		
		printf("\n");
		
	}

	for (i = 0; i < x; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf(" ");
		}

		for (j = 0; j < x - i - 1; j++)
		{
			printf("%c", rep[j]);
		}
		j--;

		while (--j >= 0)
		{
			printf("%c", rep[j]);
		}
		printf("\n");
		
	}
	
	return 0;
}
