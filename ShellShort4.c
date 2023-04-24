//error
#include<stdio.h>
void main()
{int a[] = {9,8,7,6,5,4,3,2,1};
	int size = sizeof(a)/sizeof(a[0]);
	int gap = (size/2);
	int i=0,i2,n=1,j;
	
	while(gap>=1)
	{
	for(j=gap; j<size; j++)
	{
		
		if(a[i]>a[j])
		{
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			
			
	i2=i;		
	int k=i2-gap;
	
	
 while(k>=0)
 {
 
 	if(a[k]>a[i2])
	{
		int temp = a[i2];
		a[i2] = a[k];
		a[k] = temp;
    } 
	 i2=k;
	 k=i2-gap;
}


	}
	    i++;
		
	}
		gap=gap/2;
		i=0;    //this line is in notepad
		printf("\npass %d  ",n++);    //this line is in notepad
	}
	printf("\nSorted array is:-  ");
	for(i=0;i<size;i++)
	{
		printf(" %d ",a[i]);
	}
	
	
}
