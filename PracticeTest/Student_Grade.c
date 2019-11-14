#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Endcode -1
FILE * fp;

struct stu {
	char name[50];
	int no_of_units;
	int mark[5];
};
	typedef struct stu student;

int read_file (student students[]);
void menu();
void display(student students[], int size);
double find_average(student students[], int size, char n);

int main()
{
	unsigned int choice;
	int size;
	char n[50];
	student students[size];
	
	do {
	main();
	scanf("%d", &choice);
	size = read_file(students);
	
	switch (choice)
		{
			case 1:
			display(students ,size);
			break;
			
			case 2:
			printf("Enterr the name of the Student: ");
			scanf("%s", &n);
			find_average(students, size, n);
			break;
		}
	
	} while (choice != Endcode);
	
	return 0;
}

void menu()
{
	printf("Enter Your Choice\n");
	printf("Enter one to Display Grade Details\n");
	printf("Enter 2 to find the Average Mark of the Student");
	printf("Enter -1 to Exit the program");
}

void read_file(student students[])
{
	int i;
	fp = fopen("grades.txt", "r");
	char n;
	int u, m;
	
	if(!fp)
	{
		printf("Unable to open file\n");
	}
	
	while (fscanf(fp,"%s %d %d",n, &u, &m) != EOF) 
	{
		strcpy(student[i], n);
		student[i]->no_of_units = u;
		student[i]->mark[student[i]->no_of_units] = m
		i++;
	}
	
	fclose(fp);
	
	return i;
}

void display(student students[], int size);
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("Name: %s\n", student[i]->name);
		printf("%s has done %d units and his marks are\n", student[i]->name, student[i]->no_of_units);
		printf("%d", student[i]->marks[student[i]->no_of_units]);
	}
	
}

double find_average(student students[], int size, char n);
{
	int i, u, a;
	double avg;
	for (i = 0; i < size; i++)
	{
		if (strcmp(student[i]->name, n)) = 0
		{
			u = students[i]-> no_of_units;
			for (a = 0; a < u; a++)
			{
				return avg = (students[i]->mark[a]+ students[i]->mark[a])/u;
			}
		}
	}
}





