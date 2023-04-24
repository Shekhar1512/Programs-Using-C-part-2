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
	printf("0 or 1\n");
	scanf("%d",&c);
    }
    
    
    printf("\nEnter node data for end:-\n");
    newnode=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&newnode->data);
	newnode->next=0;
	temp->next=newnode;
	

	
    
    
    
    printf("\nElements are:-\n\n");
    temp=head;
    i=1;
    while(temp!=0)
    {
	  printf("  %d ",temp->data); 
	  temp=temp->next;
	  i++;
    }
  printf("  %d ",temp->data); 
		      
    
    
}
