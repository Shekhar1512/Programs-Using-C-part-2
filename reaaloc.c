#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n;
	printf("Enter any no:-\n");
	scanf("%d",&n);
	int *ptr=(int *)calloc(n,sizeof(int));
	for(i=0;i<n+2;i++)
	{
		scanf("%d",(ptr+i));
	}
	for(i=0;i<n;i++)
	{
		printf(" %d ",*(ptr+i));
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf(" %d ",*(ptr+i));
	}
	
	
}
