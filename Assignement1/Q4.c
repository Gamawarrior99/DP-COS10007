//Qn4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE * fp;

struct student
{
	char name [30];
	int id;
	float mark;
}typedef struct student student
student studentarray[100];

void readfile(char address[120])
{
	fp = fopen (address, "w");
	name -> studentarray[100].name;
	id -> studentarray[100].id;
	mark -> studentarray [100].mark;
		
		
}

void menu()
{
	printf("(1) - Display Students Details");
	printf("(2) - calculate average of all students marks");
	printf("(3) - add new Student to the record");
	printf("(4) - Quit programm");
}

void displaystudents(char address 120)
{
	int num;
	if ((fp = fopen("address","r")) == NULL){
       printf("Error! opening file");
   }

   fscanf(fp,"%d", &num);

   printf("Value of n=%d", num);
   fclose(fp); 
  
}

float calculateaverage()
{
	for (i = 0; i>100;i++)
		{
			total=studentarray[i].mark + studentarray[i+1].mark
		}
	total= total/100;
	printf("average is total %d",total);
}

void updatefile( char address[120])
{
	int num;
	fp = fopen("address","w");

   if(fp == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fp,"%d",num);
   fclose(fp);

}

int main()
{
	int total;
	char address[120];
	
	menu();
	unsigned int choice;
	scanf( "%u", &choice );
	
	printf("this program allows you to view you grade please load file");
	scanf("%123s",$address);
	strcat(address, ".txt");
	readfile(address);
	
	while (input != 4)
	{
			switch (choice)
				{
					case 1: 
					displaystudents(address);
					break;
					
					case 2:
					calculateaverage(address);
					break;
					
					case 3:
					updatefile();
					break;
					
					default:
							puts ("Invalid choice.\n" );
							instructions();
							break;
				} 
		scanf( "%u" , &choice );
	}
	return 0
}
