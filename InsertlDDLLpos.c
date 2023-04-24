#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
	struct node*prev;
}*temp,*head=0,*tail,*newnode,*nextnode,*previous;


int  main()
{
	int i=1,c=1,k;
	while(c)
	{
	
	printf("Enter %d data:-\n",i++);
	newnode=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&newnode->data);
	newnode->next=0;
	newnode->prev=0;
	
	if(head==0)
	{
		head=tail=newnode;
	}
	else
	{
		tail->next=newnode;
		newnode->prev=tail;;
		tail=newnode; 
	}
	printf("Press 0 for exit. \t press 1 for continue.\n");
	scanf("%d",&c);
    }
    
    
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the position after you want node:-  ");
    scanf("%d",&k);
    printf("\nEnter the data:-  ");
    scanf("%d",&newnode->data);
    
	
	temp=head;
	while(k>i)
	{
		temp=temp->next;
		i++;
	}
	
	newnode->next=temp->next;
	temp->next->prev=newnode;
	temp->next=newnode;
	newnode->prev=temp;
	
	
	
	
	tail=head;
	
	
	
 
 
 
 
    while(tail!=0)
    {
	  printf(" %d ",tail->data); 
	  tail=tail->next;
    }
printf("  %d ",tail->data); 
	      
    
    return 0;
}
