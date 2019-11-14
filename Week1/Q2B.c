#include <stdio.h>

int main()
{
	int a, b, *ptr =&b;
	a= 1;
	b= 2;
	
	printf("A is = %d\n", a);
	printf("B is = %d\n", b);
	printf("ptr = %d\n", ptr);
	printf("ptr when saved as the address of b is = %d\n", ptr);
	printf("if a is set to show the the data that ptr points to a is %d\n", a = *ptr);
	return 0;
}