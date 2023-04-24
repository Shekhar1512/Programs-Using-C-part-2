#include<stdio.h>
#include<conio.h>
struct node* create();
struct node{
	int data;
	struct node * left;
	struct node * right;
	
};

struct  node* create()
{
	int x;
	struct node*newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data or (-1) for no node:-\n"); 
	scanf("%d",&x);
	if(x==-1)
	{
		return 0;
	}
	newnode->data=x;
	printf("Enter the left child of %d node:-\n",x);
	newnode->left=create();
	printf("Enter the right child for %d ",x);
	newnode->left=create();
	return newnode;
	
}



int main()
{
	struct node * root;
	root = create();
	return 0;
}
