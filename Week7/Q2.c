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



void bubble(int arr[], int size)
{
	int d, c, temp;
   for (c = 0 ; c < size - 1; c++)
  {
    for (d = 0 ; d < size - c - 1; d++)
    {
      if (arr[d] > arr[d+1])
      {
        temp       = arr[d];
        arr[d]   = arr[d+1];
        arr[d+1] = temp;
      }
    }
  }
 
  printf("Bubble sort: ");
 
  for (c = 0; c < size; c++)
  {
     printf("%d ", arr[c]);
   }
   printf("\n\n");
} 


void selection(int arr[], int size)
{
	int i;
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
	printf("Selection sort: ");
	for (i = 0; i < size; i++)
  {
     printf("%d ", arr[i]);
   }
   printf("\n\n");
}

void insertion(int arr[], int size)
{
	int i, j, index;
	for (i = 1; i < size; ++i)
	{
		index = arr[i];
		for (j = i; j > 0 && arr[j-1] > index; j--)
			arr[j] = arr[j-1];

		arr[j] = index;
	}
	
	printf("Insertion sort: ");
	
	for (i = 0; i < size; i++)
  {
     printf("%d ", arr[i]);
   }
   printf("\n\n");
}


int main()
{
	int size = 10;
	int array[size];
	random(array, size);
	bubble(array, size);
	random(array, size);
	selection(array,size);
	random(array, size);
	insertion(array,size);
	
	return 0;
}