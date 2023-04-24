#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
}*head=0,*temp,*newnode,*nextnode,*cnode,*previous=0;


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
nextnode=cnode=head;
while(nextnode!=0)
{

nextnode=nextnode->next;
cnode->next=previous;
previous=cnode;
cnode=nextnode;
}
	 
 temp=previous;   
    
    
    
    
    
    
    
    
    while(temp!=0)
    {
	  printf(" %d ",temp->data); 
	  temp=temp->next;
    }
printf("  %d ",temp->data); 
	      
    
    
}
