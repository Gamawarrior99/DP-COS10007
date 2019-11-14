#include <stdio.h>
#inclulde <stdlib.h>

struct bankEmployee
{
	char name[20];
	int salary;
	struct bankEmployee *next;
};

typedef struct bankEmployee BANKEmployee;
typedef BANKEmployee *BANKEmployeePtr;

int isEmpty( ListNodePtr sPtr )
{
	return sPtr == NULL;
} /* end function isEmpty*/
/* print the list*/
void printList( ListNodePtr currentPtr )
{
	/* if list is empty*/
	if ( isEmpty( currentPtr ))
	{
		puts( "List is empty.\n" );
	} /* end if*/
	else
	{
		puts( "The list is: " );
		/* while not the end of the list*/
		while ( currentPtr != NULL )
		{
			printf( "%c --> ", currentPtr->data );
			currentPtr = currentPtr ->nextPtr;
		} /* end while*/
		puts( "NULL\n" );
	} /* end else*/
} /* end function printList */



	void insert( BANKEmployee *sPtr, char value, int sal )

	{

	BANKEmployee newPtr;
	BANKEmployee previousPtr; 
	BANKEmployee currentPtr;
	
	newPtr = malloc( sizeof( BANKEmployee));
	
	if ( newPtr != NULL )  /* is space available*/
	{
		newptr -> name = x;
		newptr -> salary = sal;
		newPtr -> next = NULL;; /*	node does not link to another node*/
		previousPtr = NULL;
		currentPtr = *sPtr;
		/* loop to find the correct location in the list*/
		while ( currentPtr != NULL && value > currentPtr ->Name)
		{
			previousPtr = currentPtr; /* walk to ...*/
			currentPtr = currentPtr->nextPtr; /* ... next node*/
		} /* end while*/
		/* insert new node at beginning of list*/
		if ( previousPtr == NULL )
		{
			newPtr->nextPtr = *sPtr;
			*sPtr = newPtr;
		} /* end if*/
		else   /* insert new node between previousPtr and currentPtr*/
		{
			previousPtr->nextPtr = newPtr;
			newPtr->nextPtr = currentPtr;
		} /* end else*/
	} /* end if*/
	else
	{
		printf( "%c not inserted. No memory available.\n", value );
	} /* end else*/
}

int main()
{
	ListNodePtr startPtr = NULL;
	
	char x;
	int sal = 1000;
	
	stpcpy(x, Antony);
	sal = 200;
	insert( &startPtr, x, sal);
	
	stpcpy(x, peter);
	sal = 400;
	insert( &startPtr, x, sal);
	stpcpy(x, sam);
	sal = 100;
	insert( &startPtr, x, sal);
	
	stpcpy(x, tony);
	sal = 300;
	insert( &startPtr, x, sal);
	
	stpcpy(x, justin);
	insert( &startPtr, x, sal);
	
	
	
	
	
	
	printList( startPtr );
	
	
	
	BANKEmployee previousPtr; /* pointer to previous node in list*/
	BANKEmployee currentPtr; /* pointer to current node in list*/
	BANKEmployee tempPtr; /* temporary node pointer*/
	/* delete first node*/
	if ( value == (*sPtr )-> data )
	{
		tempPtr = *sPtr; /* hold onto node being removed*/
		*sPtr = ( *sPtr )->nextPtr; /* de-thread the node*/
		free( tempPtr ); /* free the de-threaded node*/
		return value;
	} /* end if*/
	else
	{
		previousPtr = *sPtr;
		currentPtr = ( *sPtr )->nextPtr;
		/* loop to find the correct location in the list*/
		while ( currentPtr != NULL && currentPtr -> data != value)
		{
			previousPtr = currentPtr; /* walk to ...*/
			currentPtr = currentPtr -> nextPtr; /*... next node*/
		} /*	end while*/
		/* delete node at currentPtr*/
		if ( currentPtr != NULL )
		{
			tempPtr = currentPtr;
			previousPtr->nextPtr = currentPtr->nextPtr;
			free( tempPtr );
			return value;
		} /* end if*/
	} /* end else*/

} /* end function delete*/
	
	

