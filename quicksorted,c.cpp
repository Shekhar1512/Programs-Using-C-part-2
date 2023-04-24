#include<stdio.h>
void quicksort(int *,int,int);
int partition(int *, int ,int);
int lb,ub,start,end,temp,i,loc,pivot;
int  main()
{
	int input[]={2,7,8,1,4};
	int size = sizeof(input)/sizeof(input[0]);
	lb=0;
	ub=size-1;
	quicksort(input,lb,ub);
    printf("\n");
	for(i=0;i<size;i++)
	{
		printf(" %d ",input[i]);
    }
return 0;
}
void quicksort(int input[],int lb, int ub)
{
	if(lb<ub)
	{
		loc = partition(input, lb, ub);
		quicksort(input,lb,loc-1);
		quicksort(input,loc+1,ub);
	}
}


int partition(int input[],int lb, int ub)
{
	
	pivot = input[lb];
	start=lb;
	end = ub;
	while(start<end)
	{
		while(input[start]<=pivot)
		{
			start++;
		}
		while(input[end]>pivot)
		{
			end--;
			
		}
		
		if(start<end)
		{
			temp=input[end];
			input[end]=input[start];
			input[start]=temp;
		}
	
}
		temp=input[lb];
		input[lb]=input[end];
		input[end]=temp;
		
		return end;
		
		
	
}













