#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define endcode -1

void menu();
void random(int arr[], int size);
void selection_sort(int arr[], int size);
void selection_sort_dec(int arr[], int size);
int sorted_inc(int arr[], int size);
int sorted_dec(int arr[], int size);




int main()
{
	int size = 10, ans, ret;
	int arr[size];
	menu();
	random(arr, size);
	
	do{
	scanf("%d", &ans);
	
	switch (ans)
	{
	
		case 1:
		selection_sort(arr, size);
		break;
		
		case 2:
		selection_sort_dec(arr, size);
		break;
		
		case 3:
		ret = sorted_inc(arr, size);
		
		if (ret == 0)
		{
			printf("In Assending order\n");
		}
		else
			if (ret == 1)
			{
				printf("Not in Assending Order\n");
			}
		break;
		
		case 4:
		ret = sorted_dec(arr, size);
		if (ret == 0)
		{
			printf("In desending  order\n");
		}
		else
			if (ret == 1)
			{
				printf("Not in desending Order\n");
			}
		break;
		
		default:
				puts ("Invalid choice.\n" );
				break;
	} /* end switch*/
	menu();
	
	
	}while ( ans != endcode);
	
	printf("Program Terminated Sucessfully");

	return 0;
}


void menu()
{
	printf("\n");
	printf("1 - Sort in Asending Order\n");
	printf("2 - sort in desending Order\n");
	printf("3 - Check to see if the array is in Assending Order\n");
	printf("4- check to see if the Array is in Desending Order\n");
	printf("-1 - To Terminate Program\n");
}
void random(int arr[], int size)
{
	int i;
	
	srand(time(NULL));;
	for(i=0;i<size;i++)
	{
		arr[i] = rand() % (4+1);
	}
}

void selection_sort(int arr[], int size)
{
	int i, temp;
		for (int i = 0; i < size; i++)                     //Loop for ascending ordering
	{
		for (int j = 0; j < size; j++)             //Loop for comparing other values
		{
			if (arr[j] > arr[i])                //Comparing other array elements
			{
				int temp = arr[i];         //Using temporary variable for storing last value
				arr[i] = arr[j];            //replacing value
				arr[j] = temp;             //storing last value
			}  
		}
	}
	printf("Ascending : ");                     //Printing message
	for (int i = 0; i < size; i++)                     //Loop for printing array data after sorting
	{
		printf(" %d ", arr[i]);
	}
	
	printf("\n");
}

void selection_sort_dec(int arr[], int size)
{
	int i, temp;
		for (int i = 0; i < size; i++)                     //Loop for descending ordering
	{
		for (int j = 0; j < size; j++)             //Loop for comparing other values
		{
			if (arr[j] < arr[i])                //Comparing other array elements
			{
				int temp = arr[i];         //Using temporary variable for storing last value
				arr[i] = arr[j];            //replacing value
				arr[j] = temp;             //storing last value
			}
		}
	}
	printf("Descending : ");                    //Printing message
	for (int i = 0; i < size; i++)                     //Loop for printing array data after sorting
	{
		printf(" %d ", arr[i]);                   //Printing data
	}
	printf("\n");
}


int sorted_inc(int arr[], int size) 
{ 
int i;
  
	for (i = 0; i < size; i++)
		{
			if(arr[i] > arr[i+1])
			{
				
				return 1;
			}
		}
	
 	return 0;
} 

int sorted_dec(int arr[], int size)
{
	int i;
	for (i = size; i < 0; i--)
		{
			if(arr[i] > arr[i+1])
			{
				printf("not in desending order");
				return 1;
			}
			
			else
			{
				printf("In desending order\n");
				
			}
		}
	printf("\n");
 	return 0;
}