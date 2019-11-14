#include <stdio.h>

int main()
{
	int x, *ptr_x;
	x = 2;
	ptr_x = &x;
	printf("value of x is %d\n", x);
	printf("location  of x is %d\n", ptr_x);
	printf("value that ptr_x is pointing to is %d", *ptr_x);
	
	return 0;
}