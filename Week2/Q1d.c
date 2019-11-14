#include <stdio.h>


int main()
{
	int x, y, i;
	printf("Enter data ");
	scanf("%d",&x);
	printf("data entered was %d\n", x);
	printf("Enter data ");
	scanf("%d",&y);
	printf("data entered was %d\n", y);
	if (x<y)
	{
		 i = y;
	}
	else
	{
		 i =x;
	}
	printf("largest number was %d",i);
	
	return 0;
}