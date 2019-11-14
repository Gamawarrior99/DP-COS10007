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
	printf("ptr when saved as the address of c is = %d\n", ptr);
	printf("b is set to the value stored in location the poiter is pointing too which is %d\n",b=*ptr);
	printf("pointerr is now pointing the the location of a which is %d\n", *ptr = a);
	return 0;
}