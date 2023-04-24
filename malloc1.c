#include<stdio.h>
void main()
{
	int *ptr,*ptr2,n,i;
	printf("enter no. of elements:-\n");
	scanf("%d",&n);
	ptr2=ptr=(int*)malloc(n*sizeof(int));
	printf("\nEnter value:-");

	for(i=0;i<n;i++)
	{
		scanf("%d",ptr);
		ptr++;
		
	}
	printf("\nEntered value:-");
    ptr--;
	for(i=0;i<n;i++)
	{
		printf(" %d ",*ptr);
		ptr--;
		
	}
	
	
}
