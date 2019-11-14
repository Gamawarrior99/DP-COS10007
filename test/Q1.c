#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define endcode -1




void random(int arr[], int size)
{
	int i;
	
	srand(time(NULL));;
	printf("Array: ");
	for(i=0;i<size;i++)
	{
		arr[i] = rand() % (30+1);
		printf("%d ", arr[i]);
	}
	printf("\n");
}



int linear(int array[], int key, int size)
{
	int i;
	for ( i = 0; i < size; i++ ){
 		if (array[i] == key ){
			return i;
 		}
 	}
 	return -1;

	
}

int main()
{
	int size = 10, k, ans;
	int arr[size];
	int n = sizeof(arr) / sizeof(arr[0]);
	do{
	random(arr, size);
	printf("Enter a search key (0 - 30): ");
	scanf("%d", &k);
	ans = linear(arr, k, size);
	if (ans != -1)
	{
		printf("The key: %d is in the %d position\n", k, ans);
	}
	else
		if (k > 30)
	{
		printf("Only Numbers Between 0 and 30 can be entered\n");
	}
	else 
	
	{
		printf("key %d could not be found in the array\n", k);
	}
	printf("\n");
	} while (k != endcode);
	printf("Succesfully Terminated Program");
	
	return 0;
}