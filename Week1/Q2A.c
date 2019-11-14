#include <stdio.h>

int main()
{
	int a, b, *ptr;
	a= 1;
	b= 2;
	
	printf("A is = %d\n", a);
	printf("B is = %d\n", b);
	printf("ptr = %d\n", ptr);
	printf("if ptr is set to b ptr is %d\n", ptr=&b);
	return 0;
}