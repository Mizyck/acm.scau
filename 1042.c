#include <stdio.h>
int main()
{
	int s1 = 0, s2 = 0, num;
	int day = 0, give = 1;
	scanf("%d", &num);
	num = num * 100;
	while (s1 <= s2 && day <= 30)
	{
		s1 += give;
		s2 += num;
		give = give * 2;
		day++;
	}
	printf("%d", day);
	return 0;

}
