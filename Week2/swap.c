#include <stdio.h>

void swap(int *p1, int *p2)
{
	int x;
	x =  *p1;
	*p1 = *p2;
	*p2 = x;
}

int main()
{ 
	int x = 50; 
	int y = 60;
	printf("x: %d, y: %d\n", x, y);
	swap (&x, &y); // swap
	printf("x: %d, y: %d\n", x, y); // Should print out x: 60, y: 50
}
