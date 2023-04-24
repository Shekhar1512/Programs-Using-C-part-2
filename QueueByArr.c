#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 5
int front = -1,rear=-1;
int queue[size];
void enqueue(int);
void dequeue();
void display();



void display()
{
	int i;
	printf("\n\nElements are:-   ");
	if(front == -1 && rear == -1)
	{ 
	   printf("\n\nQueue is Underflow.\n\n");
	}

	else
	{
		for(i=front;i<=rear;i++)
		{
			printf(" %d ",queue[i]);
		}
		printf("\n\n");
	}
}



void dequeue()
{
	if(front == -1 && rear == -1 || front > rear)
	{ 
	   printf("\n\nQueue is Underflow.\n\n\n");
	}
	else
	{
		printf("\n\n%d is deleted.\n\n",queue[front++]);
	}
}


void enqueue(int x)
{
	if(rear==size-1 )
	{
		printf("\n\nQueue is Overflow.\n\n\n");
	}
	else
	{
		if((front == -1 && rear ==-1) || front > rear)
		{
			front = rear =-1;
			front++;  
	        queue[++rear] = x;
		    printf("\nInsertion Successful.\n\n");
		}
		else
		{
	       queue[++rear] = x;
		   printf("\nInsertion Successful.\n\n");
	    }
	}
}

void main()
{

	while(1)
	{
		int c,x;
		printf("\nPress 1 for enqueue.\tPress 2 for dequeue.\tPress 3 for display.\tPress 4 for exit.\n\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1 : printf("\nEnter data:-   ");
			         scanf("%d",&x);
			         enqueue(x);
			         break;
			case 2 : dequeue();
			         break;
			case 3 : display();
			         break;
			
			case 4 : exit(0);        
			         break;
			default : printf("\n\nWrong Choice.\n\n\n");		  
		}
	}
}
