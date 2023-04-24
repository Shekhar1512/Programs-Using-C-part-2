#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 5

void push(int);
void pop();
void display();
void peek();
int stack[size];
int top=-1;

void peek()
{
	if(top==-1)
	{
		printf("\nStack is underflow.\n\n\n\n");
    }
    else
    {
    	printf("peek element is %d",stack[top]);
	}
    
}


void display()
{
	if(top==-1)
	{
		printf("\nStack is underflow.\n\n\n\n");
    }
    else
    {
	
	int i;
	printf("\n\n\nStack elements are:-  ");
	for(i=0;i<=top;i++)
	{
		printf(" %d ",stack[i]);
	}
printf("\n\n\n\n");	
    }
}



void pop()
{
	if(top==-1)
	{
		printf("\nStack is underflow.\n\n\n");
	}
	else
	{
		printf("\n%d  is successfully poped\n\n\n\n",stack[top-- ]);
	}
}



void push(int x)
{
	if(top<size-1)
	{
		stack[++top]=x;
		printf("\nInsertion successful\n\n");
	}
	else
	{
		printf("\nStack is overflow.\n\n\n");
	}
}

void main()
{
	while(1)
	{
		int c,x;
	
    printf("\nPress 1 for Push:-\nPress 2 for Pop:-\nPress 3 for peek:-\nPress 4 for display:-\nPress 5 for exit\n\n\n\n");
	scanf("%d",&c);
	switch(c)
	{
	   case 1 : printf("\nEnter element:-  ");
	            scanf("%d",&x);
				push(x);
				break;
				
	   case 2 : pop();
	            break;
	   
	   case 3 : peek();
	            break;
	
	   case 4 : display();
	            break;
	    
	   case 5 : exit(0);
	            break;
	   
	   default : printf("\n\nWrong Choice\n\n");
	               
				    	
	}
	
    }  
}
