#include<stdio.h>
void quicksort(int *,int ,int);
int partition(int *,int ,int);

int partition(int a[],int lb,int ub)
{
	
	int pivot=a[lb];
	int start=lb;
	int end=ub;
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
	int temp=a[start];
	a[start] = a[end];
	a[end] =temp;
}
}
int temp = a[lb];
	a[lb]=a[end];
	a[end]= temp;

return end; 

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

void main()
{
	int i;
	int a[]={60,0.0156};
	int size = sizeof(a)/sizeof(a[0]);
	int lb=0;
	int ub =size-1;
	quicksort(a,lb,ub);
	for(i=0;i<size;i++)
	{
		printf(" %d ",a[i]);
	}
	
}

