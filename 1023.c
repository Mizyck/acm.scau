#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a, b, c;
	char op;
	scanf("%f%c%f", &a, &op, &b);
	switch (op)
	{
	case '+':
		c = a + b;
        printf("result=%.2f", c);
		break;
	case '-':
		c = a - b;
        printf("result=%.2f", c);
		break;
	case '*':
		c = a * b;
        printf("result=%.2f", c);
		break;
	case '/':
		c = a / b;
        printf("result=%.2f", c);
		break;
	default:
		printf("error");
		break;
	}
	
}
