#include<stdio.h>
void main()
{
	int n,i,temp,j,min,flag=1;
	printf("enter no. of elements:-\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter them:-\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    
	for(i=0;i<n-1;i++)
    {
    	min=i;
    	for(j=i+1;j<n;j++)
    	{
    		if(a[j]<a[min])
    		{
    			min=j;
			}
			
		}
		if(min!=i)
		{
			  temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	




}

	
	
	
	
	
	
