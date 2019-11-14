#include <stdio.h>
#include <string.h>
#define max 100

int top = -1;
int item;
char stack_string[max];
void push(char item);
char pop(void);
int isempt(void);
int isfull(void);

int main()
{
	char str[max], check[max];
	int i, ret;
	printf("\ninput a string: ");
	scanf("%s", str);
	strcpy(check,str);
	for (i=0;i<strlen(str);i++)
		{
			push(str[i]);
		}
	for(i=0;i<strlen(str);i++)
		{
			str[i]=pop();
		}
	printf("\n reverse string is %s", str);
	
	ret = strcmp(str,check);
	if (ret == 0)
	{
		printf("\nit is a pallidrome");
	}
	else
	{
		printf("\nit is not pallidrome");
	}
	
	return 0;
}

void push(char item)
{
	if(isfull())
	{
		printf("\nstack is full");
		return;
	}
	top = top+1;
	stack_string[top] = item;	
}

char pop()
{
	if(isempt())
	{
	printf("\n stack is empty");
	return 0;
	}
	
	item  = stack_string[top];
	top = top-1;
	return item;
}

int isempt()
{
	if(top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isfull()
{
	if (top==max-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


