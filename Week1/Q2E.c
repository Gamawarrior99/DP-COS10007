#include <stdio.h>

int main()
{
	double x, y, *ptr_1, *ptr_2;
	x = 15.6;
	y = 10.2;
	ptr_1 = &y;
	ptr_2 = &x;
	
	printf("X is = %d\n", x);
	printf("Y is = %d\n", y);
	printf("Ptr_1 is pointing to y and is  = %d\n", ptr_1);
	printf("Ptr_2 is poiniting to x and is = %d\n", ptr_2);
	printf("the value stored in location pointed by ptr_1 is the value located in ptr_2 + x which is %d", *ptr_1 = *ptr_2 + x);
	return 0;
}