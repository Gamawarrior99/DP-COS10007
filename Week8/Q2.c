#include <stdio.h>
#include <stdlib.h>
#include <time.h>




void random(int arr[], int size)
{
	int i;
	
	srand(time(NULL));;
	printf("unsorted list: ");
	for(i=0;i<size;i++)
	{
		arr[i] = rand() % 101;
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

int binary(int arr[], int l, int r, int x) 
{ 
    while (l <= r) 
	{ 
        int m = l + (r - l) / 2; 
        // Check if x is present at mid 
        if (arr[m] == x)
		{
            return m;
		}
  
        // If x greater, ignore left half 
        if (arr[m] < x)
		{			
            l = m + 1; 
		}
        // If x is smaller, ignore right half 
        else
		{
            r = m - 1; 
		}
    } 
  
    // if we reach here, then element was 
    // not present 
    return -1; 
} 

int selection(int arr[], int size, int k, int n)
{
	int i, ans;
		for (i = 0; i < size - 1; ++i)
		{
			int j, min, temp;
			min = i;
				for (j = i+1; j < size; ++j)
					{
						if (arr[j] < arr[min])
						min = j;
					}
						temp = arr[i];
						arr[i] = arr[min];
						arr[min] = temp;
		}
						printf("sorted array ");
					for (i = 0; i < size; i++)
						{
							printf("%d ", arr[i]);
						}
							printf("\n");
	 
				ans = binary(arr, 0, n-1, size);
				printf("ans is %d\n", ans);
				return ans;
}
	
int main()
{
	int size = 10, k, ans;
	int arr[size];
	int n = sizeof(arr) / sizeof(arr[0]);
	random(arr, size);
	printf("Enter a search key ");
	scanf("%d", &k);
	ans = linear(arr, k, size);
	if (ans != -1)
	{
		printf("The key: %d is in the %d position\n", k, ans);
	}
	else 
	{
		printf("key %d could not be found in the array\n", k);
	}
	printf("\n");
	random(arr, size);
	printf("Enter a search key ");
	scanf("%d", &k);
	ans = selection(arr, size, k, n);
	if (ans != -1)
	{
		printf("The key: %d is in the %d position", k, ans);
	}
	else 
	{
		printf("key %d could not be found in the array", k);
	}
	
	
}