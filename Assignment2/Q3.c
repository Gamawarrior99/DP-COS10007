#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void bubbleSort(char arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 

int main()
{
	char alpha[28], let, results;
	int	i = 0, a = 0 , freq;
	
	while (i<28)
	{
		printf("Enter 28 Alphabets");
		scanf("%c", alpha[i]);
		if( (alpha[i]>='a' && alpha[i]<='z') || (alpha[i]>='A' && alpha[i]<='Z'))
		{
			while (a<28)
			{
				results = strcmp((char)alpha[i], (char)alpha[a]);
				if (results == 0)
				{
					printf("Duplicate letters");
					
				}
				else
				{
					a++;
				}
			}

		i++;
		a = 0;
		}
		else
		{
			printf(" nonalphabetical letter is entered");
		}
	}
	
	bubbleSort(alpha, 28);
	
	return 0;
}