#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 5

void push(int);
void pop();
void display();

int stack[size];
int top=-1;


struct node {
	
	int data;
	struct node* prev;
	struct node* next;
}*head=0,*temp,*newnode;




void display()
{
	if(top==-1)
	{
		printf("\n\nStack is underflow.\n\n\n");
	}
	
	else
	{
		temp=head;
		int i=0;
		printf("\n\n\n\nStack element are:-   ");
		while(i!=top)
		{
			printf(" %d ",temp->data);
			i++;
			temp=temp->next;
		}
		printf(" %d ",temp->data);
		printf("\n\n\n\n");
	}
	
}

void pop()
{
	if(top==-1)
	{
		printf("\nStack is underflow.\n\n\n\n");
	}
	else
	{
		temp=head;
		int i=0;
			while(i!=top)
		    {
			i++;
			temp=temp->next;
		   }
		printf(" %d is Poped Suceesfully.\n\n\n",temp->data);
		top--;
	}
}




void push(int x)
{
	if(top==size-1)
	{
		printf("\nStack is Overflow.\n\n\n\n");
	}
	else
	{
	top++;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=0;
	
	if(head==0)
	{
		temp = head = newnode;
	}
	else
	{
		temp->next = newnode;
		temp=newnode;
	}
	printf("\nInsertion Successful.\n\n\n");
    }
}







void main()
{
	while(1)
	{
		int c,x;
	
    printf("\nPress 1 for Push:-\tPress 2 for Pop:-\tPress 3 for peek:-\tPress 4 for display:-\tPress 5 for exit\n\n\n\n");
	scanf("%d",&c);
	switch(c)
	{
	   case 1 : printf("\nEnter element:-  ");
	            scanf("%d",&x);
				push(x);
				break;
				
	   case 2 : pop();
	            break;
	   
	  
	
	   case 4 : display();
	            break;
	    
	   case 5 : exit(0);
	            break;
	   
	   default : printf("\n\nWrong Choice\n\n");
	               
				    	
	}
	
    }  
}
