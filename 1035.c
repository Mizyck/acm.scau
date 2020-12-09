#include <stdio.h>
int main()
{
	int line, space, star;
	int i, j, n;
	scanf("%d", &n);
	line = 1;
	
	j = n;
	for (i = 0; i < n + 1; i++)
	{
		for (space = 0; space < j; space++)
		{
			printf(" ");
		}
		j--;

		for (star = 0; star < line * 2 - 1; star++)
		{
			printf("*");
		}
		line++;
		printf("\n");
	}

	for (i = n; i > 0; i--)
	{
		for (space = 0; space <= j + 1; space++)
		{
			printf(" ");
		}
		j++;

		for (star = line * 2 - 5; star > 0;star--)
		{
			printf("*");
		}
		line--;
		printf("\n");
	}


	return 0;
}
