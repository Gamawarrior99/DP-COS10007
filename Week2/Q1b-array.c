#include <stdio.h>

int main()
{
	int x[4];
	int i = 0;
	printf("input data\n");
		while (i<4)
		{
			scanf("%d", &x[i]);
			i++;
		}
	printf("array includes ");
	i = 0;
		while (i<4)
		{
			printf("%d ", x[i]);
			i++;
		}
	
}