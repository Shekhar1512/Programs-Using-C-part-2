#include<stdio.h>
void main()
{
	int n,i,j;
	printf("enter no of elements:-\n");
	scanf("%d",&n);
	int a[n],temp;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<n;i++)
	{
	 temp = a[i];
		for( j=i-1;j>=0;j--)
		{
			if(a[j]>temp)
			{
				a[j+1]=a[j];
			}
			else
			{
				break;
			}
		}
		a[j+1]=temp;
	}
	
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
}
