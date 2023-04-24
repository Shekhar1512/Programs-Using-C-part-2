#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
}*head=0,*temp,*newnode;


void main()
{
	int i=1,c;
	while(c)
	{
	
	printf("Enter %d data:-\n",i++);
	newnode=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	{
		head=temp=newnode;
	}
	else
	{
		temp->next=newnode;
		temp=newnode; 
	}
	printf("Press 0 for exit. \t press 1 for continue.\n");
	scanf("%d",&c);
    }
    printf("\nElements are:-\n\n");
    temp=head;
    i=1;
    while(temp!=0)
    {
	  printf(" %d = %d. ",i++,temp->data); 
	  temp=temp->next;
    }
    
    
}
