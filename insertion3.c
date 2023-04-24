#include<stdio.h>
void main()
{
	int i,j;
	int a[]={9,8,7,6,5,1,2};
	int size=sizeof(a)/sizeof(a[0]);
	for(i=1;i<size;i++)
	{
		int temp=a[i];
		 j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	for(i=0;i<size;i++)
	{
		printf(" %d ",a[i]);
	}
}
