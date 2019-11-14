#include <Stdio.h>
#include <stdlib.h>

struct STUDENTID
{
	int id;
	struct STUDENTID*nextptr;
};

typedef struct STUDENTID studentid;
typedef studentid *studentidptr;
	
void BubbleSort(int a[], int array_size)
{
	int i, j, temp;
	for (i = 0; i < (array_size - 1); ++i)
	{
		for (j = 0; j < array_size - 1 - i; ++j)
		{
			if (a[j] >a[j+1])
			{
				temp = [j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
		}
	}
}

void insert( studentidptr *sPtr, int value )
{
	studentidptr newPtr; 
	studentidptr previousPtr; 
	studentidptr currentPtr; 
	newPtr = malloc( sizeof( STUDENTID ));
	
	if ( newPtr != NULL )  
	{
		newPtr->id = value; 
		newPtr->nextPtr = NULL; 
		previousPtr = NULL;
		currentPtr = *sPtr;
		
		while ( currentPtr != NULL && value > currentPtr ->id)
		{
			previousPtr = currentPtr; 
			currentPtr = currentPtr->nextPtr;
		} 
		
		if ( previousPtr == NULL )
		{
			newPtr->nextPtr = *sPtr;
			*sPtr = newPtr;
		} 
		else   
		{
			previousPtr->nextPtr = newPtr;
			newPtr->nextPtr = currentPtr;
		} 
	} 
	else
	{
		printf( "%c not inserted. No memory available.\n", value );
	} 
} 

int isEmpty( studentidptr sPtr )
{
	return sPtr == NULL;
} 

void printList( studentidptr currentPtr )
{
	
	if ( isEmpty( currentPtr ))
	{
		puts( "List is empty.\n" );
	} 
	else
	{
		puts( "The list is: " );
		
		while ( currentPtr != NULL )
		{
			printf( "%c --> ", currentPtr->id );
			currentPtr = currentPtr ->nextPtr;
		} 
		puts( "NULL\n" );
	} 
} 


int main()
{
	int id[5], i = 0;
	studentidptr startPtr = NULL; /* initially there are no nodes*/
	
	printf("Enter Lat 5 digits of student id");
	
	while (i<=5)
	{
		scanf("%d", &id[i]);
		i++;
	}
	
	bubblesort(id, 5);
	
	while (i<=5)
	{
		insert( &startPtr, id[i]);
	}
	
	printList(startPtr);
}