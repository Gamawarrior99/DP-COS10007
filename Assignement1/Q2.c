#include <stdio.h>
#include <time.h>

#define AEST (+11)
#define BST (+0)
#define EST (-5)
#define AWST (+8)
#define NPT (+5)
#define NPT_min (+45)
#define IST (+5)
#define ISTmin (+30)

int t1h, t1m, t2h, t2m, ans;

void instructions_1()
{
	printf("What time Zone are we in?\n ");
	printf("Please Select a time Zone\n");
	printf("(1) - Melbourne\n");
	printf("(2) - London\n");
	printf("(3) - New York\n");
	printf("(4) - Perth\n");
	printf("(5) - kathmandu\n");
	printf("(6) - Goa\n");
	printf("(7) - other timezone (Enter your own)\n");
	
	
}

void instructions_2()
{
	printf("Which Place Would you like to find out what the time is?\n ");
	printf("Please Select a time Zone\n");
	printf("(1) - Melbourne\n");
	printf("(2) - London\n");
	printf("(3) - New York\n");
	printf("(4) - Perth\n");
	printf("(5) - kathmandu\n");
	printf("(6) - Goa\n");
	printf("(7) - other timezone (Enter your own)\n");
	
	
}

void time_2 (int choice)
{
	struct tm * info; //This is a structure used to hold the time and date.
	time_t rawtime; //This is a type suitable for storing the calendar time.
	time ( &rawtime ); //Stores time data in rawtime
	info = gmtime ( &rawtime ); 
	
	ans = choice;
	switch ( choice )
		{
		case 1:
		 printf("The Time in Melbourne is  : %2d:%02d:%02d\n", (info->tm_hour+AEST)%24, info->tm_min, info->tm_sec);
		 t2h = (info->tm_hour+AEST)%24;
		t2m = info-> tm_min;
		break;
		
		case 2:
		 printf("The Time in London is  : %2d:%02d:%02d\n", (info->tm_hour+BST)%24, info->tm_min, info->tm_sec);
		 t2h = (info->tm_hour+BST)%24;
		t2m = info-> tm_min;
		 break;
		 
		 case 3:
		 printf("The Time in New York is  : %2d:%02d:%02d\n", (info->tm_hour+EST)%24, info->tm_min, info->tm_sec);
		 t2h = (info->tm_hour+EST)%24;
		t2m = info-> tm_min;
		break;
		
		case 4:
		 printf("The Time in Perth is  : %2d:%02d:%02d\n", (info->tm_hour+AWST)%24, info->tm_min, info->tm_sec);
		 t2h = (info->tm_hour+AWST)%24;
		t2m = info-> tm_min;
		break;
		
		case 5:
		 printf("The Time in kathmandu is  : %2d:%02d:%02d\n", (info->tm_hour+NPT)%24, (info->tm_min+NPT_min)%60, info->tm_sec);
		 t2h = (info->tm_hour+NPT)%24;
		t2m = (info->tm_min+NPT_min)%60;
		break;
		
		case 6:
		 printf("The Time in Goa is  : %2d:%02d:%02d\n", (info->tm_hour+IST)%24, (info->tm_min+ISTmin)%60, info->tm_sec);
		 t2h = (info->tm_hour+IST)%24;
		t2m = (info->tm_min+ISTmin)%60;
		break;
		
		case 7:
		instructions_2();
		scanf( "%u", &choice );
		printf("\nEnter GMT Hours: ");
		scanf("%2d",&t2h);
		printf("\nEnter GMT Minutes: ");
		scanf("%2d",&t2m);
		break;
		}
		
}

void time_1(int choice)
{
		struct tm * info; //This is a structure used to hold the time and date.
		time_t rawtime; //This is a type suitable for storing the calendar time.
		time ( &rawtime ); //Stores time data in rawtime
		info = gmtime( &rawtime ); //Gets gmt time
		
		
		
	switch ( choice )
		{
			
		case 1:
		instructions_2();
		scanf( "%u", &choice );
		
		printf("\n\n\n -----------------------------------------------------------------\n");
		printf("The time Locally is  : %2d:%02d:%02d\n", (info->tm_hour+AEST)%24, info->tm_min, info->tm_sec);
		t1h = (info->tm_hour+AEST)%24;
		t1m = info-> tm_min;
		
		time_2(choice);
		
		break;
		
		case 2:
		instructions_2();
		scanf( "%u", &choice );
		
		printf("\n\n\n -----------------------------------------------------------------\n");
		 printf("The time Locally is  : %2d:%02d:%02d\n", (info->tm_hour+BST)%24, info->tm_min, info->tm_sec);
		 t2h = (info->tm_hour+BST)%24;
		t2m = info-> tm_min;
		
		time_2(choice);
		 break;
		 
		 case 3:
		 instructions_2();
		scanf( "%u", &choice );
		
		printf("\n\n\n -----------------------------------------------------------------\n");
		 printf("The time Locally is   : %2d:%02d:%02d\n", (info->tm_hour+EST)%24, info->tm_min, info->tm_sec);
		 t2h = (info->tm_hour+EST)%24;
		t2m = info-> tm_min;
		
		time_2(choice);
		break;
		
		case 4:
		instructions_2();
		scanf( "%u", &choice );
		
		printf("\n\n\n -----------------------------------------------------------------\n");
		 printf("The time Locally is   : %2d:%02d:%02d\n", (info->tm_hour+AWST)%24, info->tm_min, info->tm_sec);
		 t2h = (info->tm_hour+AWST)%24;
		t2m = info-> tm_min;
		
		time_2(choice);
		break;
		
		case 5:
		instructions_2();
		scanf( "%u", &choice );
		
		printf("\n\n\n -----------------------------------------------------------------\n");
		 printf("The time Locally is   : %2d:%02d:%02d\n", (info->tm_hour+NPT)%24, (info->tm_min+NPT_min)%60, info->tm_sec);
		 t2h = (info->tm_hour+NPT)%24;
		t2m = (info->tm_min+NPT_min)%60;
		
		time_2(choice);
		break;
		
		case 6:
		instructions_2();
		scanf( "%u", &choice );
		
		printf("\n\n\n -----------------------------------------------------------------\n");
		 printf("The time Locally is   : %2d:%02d:%02d\n", (info->tm_hour+IST)%24, (info->tm_min+ISTmin)%60, info->tm_sec);
		 t2h = (info->tm_hour+IST)%24;
		t2m = (info->tm_min+ISTmin)%60;
		
		time_2(choice);
		break;
		case 7:
		instructions_2();
		scanf( "%u", &choice );
		printf("\nEnter GMT Hours: ");
		scanf("%2d",&t1h);
		printf("\nEnter GMT Minutes: ");
		scanf("%2d",&t1m);
		break;
		}
}

int main ()
{
	unsigned int choice;
	instructions_1();
	scanf( "%u", &choice );
	printf("\n");
	time_1(choice);
	printf("The Difference is %d hours and %d min\n", t1h-t2h, t1m-t2m);
    printf(" -----------------------------------------------------------------");

  
  return 0;
}

