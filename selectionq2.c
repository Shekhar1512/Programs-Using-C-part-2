#include<stdio.h>
void main()
{
	int i,j;
	int a[]={10,1,6,5,2};
	int n=5;
	for(i=0;i<n-1;i++)
	{
		int min =i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			int temp=a[min];
			a[min]=a[i];
			a[i]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	
}
