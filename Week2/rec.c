#include <stdio.h>

int by_ten (int x)
{
	int a;
	a = x%10;
	if (a = 0)
		return 1;
	else 
		return (by_ten(x+1));
}

int main()
{
	int x, i;
	printf("input value ");
	scanf("%d", &x);
	i = by_ten(x);
	if (i = 1)
		printf("x is a multiple of 10");
	else
		printf("x is not a multiple of 10 next closest multiple is");
	
}