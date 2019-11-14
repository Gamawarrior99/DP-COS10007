#include <stdio.h>

int fact(int i);

int main()
{
	int x;
	printf("enter value ");
	scanf("%d", &x);
	printf("Factorial of %d is %d", x, fact(x));
}

int fact (int i)
{
	if (i<=1)
		{
			return 1;
		}
		else
			{
				return i*fact(i-1);
			}
}