#include<stdio.h>
void quicksort(int*,int ,int );
int partition(int *, int ,int );

void main()
{
	int i;
	int a[]={9,6,8,5,4,3,7};
	int size = sizeof(a)/sizeof(a[0]);
	int lb=0,ub=size-1;
	quicksort(a,lb,ub);
	printf("\n");
	for(i=0;i<size;i++)
	{
		printf(" %d ",a[i]);
	}
}

void quicksort(int a[],int lb,int ub)
{
	if(lb<ub)
	{
		int loc = partition(a,lb,ub);
		quicksort(a,lb,loc-1);
		quicksort(a,loc+1,ub);
	}
	
		
}

int partition(int a[],int lb, int ub)
{
	int pivot = a[lb];
	int start = 0, end=ub;
	
	while(start<end)
	{
	
	
	while(a[start]<=pivot)
	{
		start++;
	}
	while(a[end]>pivot)
	{
		end--;
	}
	if(start<end)
	{
		int temp = a[start];
		a[start] = a[end];
		a[end]=temp;
	}
	
}
	
	int temp = a[end];
	a[end]=a[lb];
	a[lb]= temp;
	
	return end;
	
}







