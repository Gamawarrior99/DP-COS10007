#include <stdio.h>

int main()
{
	int a, b, c , *ptr = &c;
	a= 1;
	b= 2;
	c = 5;
	
	printf("A is = %d\n", a);
	printf("B is = %d\n", b);
	printf("C is = %d\n", c);
	printf("ptr = %d\n", ptr);
	printf("pointer is now set to the location of c which is %d\n ", ptr = &c);
	printf("the data in b is stored in the variable c and c is now  %d\n",c = b);
	printf("a stores the value of where the pointer is pointing too and is %d\n", a = *ptr);
	
	return 0;
	
}
	