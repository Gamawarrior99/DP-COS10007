#include <stdio.h>

int main()
{
	int i,m[1], *p1, *p2;
	i = 1;
	m[0] = 10;
	m[1] = 20;
	printf("%d\n", p2 = m + 2);
	printf("%d\n", p1 = p2 + 1);
	
	
	return 0;
}