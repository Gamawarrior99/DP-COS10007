#include <stdio.h>

int main()
{
	int w, x, *ptr_2 = &x;
	w= 10;
	x= 2;
	
	printf("W is = %d\n", w);
	printf("X is = %d\n", x);
	printf("Ptr_2 is poiniting two x and is = %d\n", ptr_2);
	printf("ptr is pointing to the location of w and is %d", ptr_2-=w);
	
	return 0;
}
	