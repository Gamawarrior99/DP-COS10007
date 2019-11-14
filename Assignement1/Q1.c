#include <stdio.h>
#include <stdlib.h>

customersPtr lastOrderPtr;

struct STOCK
{
	char name[50];
	struct STOCK *next;
};
typedef struct STOCK stock;
typedef stock *stockPtr;

struct CUSTOMERS
{
	char name[50]; 
	char Gname[50];
	struct CUSTOMERS *nextPtr; 
}; 
typedef struct CUSTOMERS customers;
typedef customers *customersPtr;



void instructions()
{
	printf("(1) - Display the Current Stock (Linked-list)");
	printf("(2) - Add a game to stock (Linked-list)");
	printf("(3) - Display Next Order Info");
	printf("(4) - Display All Orders");
	printf("(5) - Add order to Queue");
	printf("(6) - Proccess the next Order");
	printf("(7) - Reverse the Last Order");
	printf("(8) - Display info of last Order");
	printf("(9) - Quit Program");
}

int isStockEmpty( stockptr sPtr )
{
	return sPtr == NULL;
} 

int isCustomersEmpty( customerPtr headPtr )
{
	return headPtr == NULL;
}

void insertintostock (stockptr *sPtr, char Gname)
{
	
	
	stockptr newPtr; 
	stockptr previousPtr; 
	stockptr currentPtr; 
	newPtr = malloc( sizeof( STOCK ));
	if ( newPtr != NULL )  
	{
		newPtr->name = Gname; 
		newPtr->nextPtr = NULL; 
		previousPtr = NULL;
		currentPtr = *sPtr;
		
		while ( currentPtr != NULL && Gname > currentPtr ->name)
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
		printf( "%c not inserted. No memory available.\n", Gname );
	} 
} 

void enqueue( customersPtr *headPtr, customersPtr *tailPtr, char name, char Gname )
{
	customersPtr newPtr; 
	newPtr = malloc( sizeof( CUSTOMERS ));
	if ( newPtr != NULL) 
	{
		newPtr->name = name;
		newPtr->Gname = Gname;
		newPtr->nextPtr = NULL;

		if ( isCustomersEmptyEmpty( *headPtr ))
		{
			*headPtr = newPtr;
		} 
		else
		{
			(*tailPtr )->nextPtr = newPtr;
		} 
		*tailPtr = newPtr;
	} 
	else
	{
		printf( "%c not inserted. No memory available.\n", Gname );
	}
}



void printstockList( stockptr currentPtr )
{
	
	if ( isStockEmpty( currentPtr ))
	{
		puts( "List is empty.\n" );
	} 
	else
	{
		puts( "The list is: " );
		
		while ( currentPtr != NULL )
		{
			printf( "%c --> ", currentPtr->data );
			currentPtr = currentPtr ->nextPtr;
		} 
		puts( "NULL\n" );
	} 
} 
	
void printQueue( customersPtr currentPtr )
{
	
	if ( currentPtr == NULL)
	{
		puts( "Queue is empty.\n"	);
	} 
	else
	{
		puts("The queue is:" );

		while ( currentPtr != NULL	)
		{
			printf( "%c --> \n", currentPtr->name );
			printf( "%c --> ", currentPtr->Gname );
			currentPtr = currentPtr->nextPtr;
		} 
		puts( "NULL\n" );
	} 
} 

char dequeue( customersPtr *headPtr, customersPtr *tailPtr )
{
	char value, v2; 
	customersPtr tempPtr;
	value = ( *headPtr )->name;
	v2 = ( *headPtr )->Gname;
	tempPtr = *headPtr;
	*headPtr = ( *headPtr )->nextPtr;

	if ( *headPtr == NULL )
	{
		*tailPtr = NULL;
	}
	lastOrderPtr = tempPtr;
	free( tempPtr );
	return value;
}

void reverse(int choice)
{
	if (choice = 7)
	{
		char value, v2; 
		value = lastOrderPtr->name;
		v2 = lastOrderPtr->Gname;
	}
	else
	{
		printf("last order is %s who ordered %s", value, v2);
	}
}




int main()
{
	char Gname[50];
	stock startstockPtr = NULL; 
	customersPtr headPtr = NULL; 
	customersPtr tailPtr = NULL; 
	unsigned int choice; 
	char item; 
	instructions(); 
	printf( "%s" , "?" );
	scanf( "%u", &choice );
		while (choice != 9 )
		{
			switch ( choice )
			{
			case 1:
			stpcpy(Gname, "Final Fantasy");
			insert( &startPtr, Gname);
		
			stpcpy(Gname, "Forza Horizon");
			insert( &startPtr, Gname);
			
			stpcpy(Gname, "Flight Simulator");
			insert( &startPtr, Gname);
			
			stpcpy(Gname, "God OF war");
			insert( &startPtr, Gname);
			
			stpcpy(Gname, "Guitar Hero");
			insert( &startPtr, Gname);
			
			stpcpy(Gname, "Halo");
			insert( &startPtr, Gname);
			
			stpcpy(Gname, "Metal Gear Solid");
			insert( &startPtr, Gname);
			
			stpcpy(Gname, "MineCraft");
			insert( &startPtr, Gname);
			
			stpcpy(Gname, "Sonic Mania");
			insert( &startPtr, Gname);
			
			stpcpy(Gname, "Skyrim");
			insert( &startPtr, Gname);
			
			stpcpy(Gname, "Tekken");
			insert( &startPtr, Gname);
		
			printstockList( startstockPtr );
			
			break;
			
			case 2:
			printf("Enter Game Name: ");
				scanf(" %[^\n]s", &Gname);
				insert( &startPtr, Gname);
				printf("%s has been added to stock list", Gname );
			
			break;
			
			case 3:
			
			stpcpy(name, "Nathan");
			stpcpy(Gname, "World Of WarCraft");
			enqueue( &headPtr, &tailPtr, name, Gname );
			
			stpcpy(name, "Manjil");
			stpcpy(Gname, "MineCraft");
			enqueue( &headPtr, &tailPtr, name, Gname );
			
			stpcpy(name, "Steven Sonic Mania");
			stpcpy(Gname, "MineCraft");
			enqueue( &headPtr, &tailPtr, name, Gname );
			
			stpcpy(name, "Andrew");
			stpcpy(Gname, "MineCraft");
			enqueue( &headPtr, &tailPtr, name, Gname );
			
			break;
			
			case 4:
			printQueue( headPtr );
			break;
			
			case 5:
			printf("Enter Customer Name: ");
			scanf("%s", &name);
			printf("\nEnter Game Purchased: ");
			scanf("%s", &Gname);
			enqueue( &headPtr, &tailPtr, name, Gname );
			break;
			}
			
			case 6:
			Name = dequeue( &headPtr, &tailPtr );
				printf( "%c has been Proccessed.\n", name );
			break;
			
			case 7:
			reverse(choice);
			break;
			
			case 8:
			reverse(choice);
			break;
			default:
			puts ("Invalid choice.\n" );
			instructions();
			break;
		}
		printf( "%s" , "? " );
		scanf( "%u" , &choice );
	} 
	puts( "End of run." );
			
}