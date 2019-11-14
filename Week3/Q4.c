#include <stdio.h>
#include <stdlib.h>
#include <string.h>




typedef struct Emps
{
	char EmpName[25]; 
	int Salary;
	int date;
} emp[5];

void Getdata(emp a)
{
	printf("Enter name ");
	scanf("%s", a->EmpName);
	
	printf("enter salary ");
	scanf("%d", &a->Salary);
	
	printf("enter date hired ");
	scanf("%d", &a->date);
}

void printdata (emp a)
{
	printf("employee's name is: %s\n", a->EmpName);
	printf("%s salary is is: %d\n", a->EmpName, a->Salary);
	printf("%s was hired on: %d\n", a->EmpName, a->date);
	printf("\n");
	
}

int main()
{
	int i;
	emp a[5];
	
	for (i = 0; i<5;i++)
	{
		printf("\nEnter Employee Details \n");
		Getdata(a[i]);
	}
	printf("\n\n");
	for (i = 4; i>-1;i--)
	{
		
		printdata(a[i]);
	}
	
	return 0;
}

