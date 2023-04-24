//Error result

#include<stdio.h>
void main()
{
	int a[]= {9,8,7,6,5,4};
	int size = sizeof(a)/sizeof(a[0]);
	int gap=size/2,i,j;
while(gap>=1)
   {  
		for(j=gap;j<size;j++)
		{	
			for(i=j-gap;i>=0;i-gap)
			{
			   if(a[i+gap]>a[i])
		    	{
				  break;
				}	
				else
				{
					int temp = a[i+gap];
				    a[i+gap] = a[i];
				    a[i] = temp;		
				}
		   }
		}
		gap=gap/2;
   }
	
	for(i=0;i<size;i++)
	{
		printf(" %d ",a[i]);
	}
}
