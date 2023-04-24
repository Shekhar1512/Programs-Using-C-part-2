#include<stdio.h>
void main()
{
	int n,min;
	printf("Enter elements:-\n");
	scanf("%d",&n);
	int a[n],i,j;
	printf("Enter them\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
for(i=0;i<n;i++)
{
	for(i=1;i<n;i++)
	{
		min=0;
		if(a[i]<a[min])
		{
			min=i;
		}
		 
	
	}
}
	printf("min is %d",a[min]);
}
	

