#include<stdio.h>
void quicksort(int [], int ,int);
int partition(int  [], int ,int);

int partition(int a[], int lb ,int ub)
{
	int start=0,end=ub;
    int pivot=a[lb];
	
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
		a[end] = temp;
	} 
    
}
	int temp = a[end];
	a[end]=a[lb];
	a[lb]=temp; 
	
	return end ; 
		
	
}

void quicksort(int *a,int lb ,int ub)
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
	int a[]={9,1,3,5,6,8};
	int n = sizeof(a)/sizeof(a[0]);
	int ub=n-1;
	int lb=0;
	quicksort(a,lb,ub);
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
}





