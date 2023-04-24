#include<stdio.h>
struct node{
	int data;
	struct node*  next;
}*newnode;
void main()
{
	int n;

	printf("Enter data");
	scanf("%d",&n);
	newnode->data = n;
	
	newnode->next = 0;
	
	printf("\n data is %d",newnode->data);
}
