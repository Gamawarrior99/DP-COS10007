#include <stdio.h>

int add_two(int x, int y);

int main()
{
	int x, y;
	printf("Please Input first number ");
	scanf("%d", &x);
	printf("please input second number ");
	scanf("%d", &y);
	printf("%d + %d = %d", x, y, add_two(x,y));
	return 0;
}

int add_two(int x, int y)
{
	return x+y;
}
