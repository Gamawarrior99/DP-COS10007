// Gamaliel D'mello, 102117407, Qn5
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Header files
#define EndCode -1
//declaration of constant

int Rand_Num1(int Num1)
{
	srand(time(NULL));// sets the seed of the random number generator to the time so that the same reandom numbers wont keep generating 
	Num1 = (rand() % 10); 
	return Num1;
}
//generates a random number from 0 -9

int Rand_Num2(int Num2)
{
	srand(time(NULL));
	Num2 = (rand() % 9)+1;
	return Num2;
}// generates a random number from 1-8 and then adds one


int Sum(int Total)
{
	int Num1, Num2, Rand1, Rand2;
	int Operator, Opt;
	
	Rand1 = Rand_Num1(Num1);
	Rand2 = Rand_Num2(Num2);
	
	
	Total = Rand1 + Rand2;
	
	return Total;
	//random generated from operator decides what what Aritmitic operation will be done
	//then perfroms the operation on the two random numbers
}


void Question()
{
int Num1, Num2, Rand1, Rand2,Total;
int Operator, Opt;
Rand1 = Rand_Num1(Num1);
Rand2 = Rand_Num2(Num2);

	printf("what is %d + %d (-1 to end): ", Rand1, Rand2);
	//uses the operator to print out the question 
	
}


int main()
{
	int Answer,STotal, Total, Correct,Incorrect, i = 0;
	
do{
	
if (i == 0)
{
	STotal = Sum(Total);
	Question();
	scanf("%d" , &Answer);
}
//if the answer is correct print new questions

if (i == 1)
{
	printf("it is: ");
	fflush(stdin); //clears the buffer of standaed input
	scanf("%d" , &Answer);
}
// if answer is incorrect allow users to enter new questions
if (Answer == STotal)
{
		srand(time(NULL));
		Correct = (rand() % 3);
		switch (Correct)
		{
		case 0:
			printf("Very Good!\n\n");
		break;
		
		case 1:
			printf("Excellent!\n\n");
		break;
		
		case 2:
			printf("Nice Work!\n\n");
		break;
		
		case 3:
			printf("Keep up the good work\n\n");
		break;
		}
		i = 0;
		//if answer is right randomly selects one statement to print
}
else if ((Answer == EndCode) && (Answer == Total))
{
	srand(time(NULL));
		Correct = (rand() % 3);
		switch (Correct)
		{
		case 0:
			printf("Very Good!\n\n");
		break;
		
		case 1:
			printf("Excellent!\n\n");
		break;
		
		case 2:
			printf("Nice Work!\n\n");
		break;
		
		case 3:
			printf("Keep up the good work\n\n");
		break;
		default:
		printf("Invalid Entry");
		break;
		}
		i = 0;
		Answer  = 0;
		//if answer is right and it is the endcode randomly selects one statement to print
}
else if(Answer == EndCode)
{
		printf("Program Has Ended\n\n");
}
//if the endcode is entered and it is not the right answer tells user the program is ending 
else
{
		srand(time(NULL));
		Incorrect = (rand() % 3);
		switch (Incorrect)
		{
		case 0:
			printf("No. Please try again\n\n");
		break;
		
		case 1:
			printf("Wrong Try Once More\n\n");
		break;
		
		case 2:
			printf("Dont Give up!\n\n");
		break;
		
		case 3:
			printf("No. Keep Trying\n\n");
		break;
		default:
		printf("Invalid Entry");
		break;
		}
		
		i = 1;
		
		
} //randomly selects statemetnt if answer is wrong 

	


} while (Answer != EndCode); //do this untill -1 is entered
	

		return 0;
}
