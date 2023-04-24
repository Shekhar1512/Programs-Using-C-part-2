#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
}*head=0,*temp,*newnode;


void main()
{
	int i=1,c,k;
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
    
    printf("Enter position  of node after you want data:- ");
    scanf("%d",&k);
    printf("\nEnter node data for end:-\n");
    newnode=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&newnode->data);
	if(k>i)
	{
		printf("Invlaid posittion.");
	}
	else
	{
	
	
	i=1;
	temp=head;
	while(k>i)
	{
		temp=temp->next;
		i++;
	}
	newnode->next=temp->next;
	temp->next=newnode;
	
	
}
	

	
    
    
    
    printf("\nYour entered Elements are:-\n\n");
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
