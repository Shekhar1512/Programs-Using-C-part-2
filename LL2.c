#include<stdio.h>
#include<stdlib.h>
struct node{
	
	int data;
	struct node * next;
	
}*head=0,*nextnode,*newnode,*cnode,*temp,*previous;

void main()
{
	int c=1;
	while(c)
	{
	
	newnode = (struct node*)malloc(sizeof(struct node )); 
	printf("\nEnter data:- ");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	{
		temp = head = newnode; 
	}
	else
{
	temp->next=newnode;
	temp=newnode;
}

printf("\nEnter choice:  ");
scanf("%d",&c);
	
    }   
    
	
	//reverse of LL

nextnode=cnode=head;	
while(nextnode!=0)
{
   nextnode=nextnode->next;
   cnode->next=previous;
   previous=cnode;
   cnode=nextnode;
   
}
	
	
	
	
	
	
	
	
	
	
	temp=previous;
    printf("\nYour nodes are:-\n\n");
    while(temp!=0)
    {
    	printf(" %d ",temp->data);
    	temp=temp->next;
	}
    	
	
    


}
