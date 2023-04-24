#include<stdio.h>
void main()
{
	int temp,j,i,n;
	printf("Enter no of elements:-\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter them:-\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0;j--)
		{
			if(a[j]>temp)
			{
				a[j+1]=a[j];
			}
                       
		}
a[j+1]=temp;
    }
    
    
	for( i=0;i<n;i++)
	{
		scanf(" %d " ,a[i]);
	}
	
	
}
