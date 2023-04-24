#include<stdio.h>
void main()
{
	int i,j,temp,n=5;
	int a[]={6,5,2,1,3};
	for(i=1;i<n;i++)
	{
		int temp = a[i];
		for(j=i-1;j>=0;j--)
		{
			if(a[j]>temp)
			{
				a[j+1]=a[j];
			}
		}
		a[j+1]=temp;
	}
	
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
}
