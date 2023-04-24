#include<stdio.h>
void mergesort(int a[],int ,int);
void merging(int a[], int lb, int mid, int ub);


void merging(int a[], int lb, int mid, int ub)
{
	int i,j,k;
	int n1 = mid-lb+1;
	int n2= ub-mid;
	int b[n1];
	int c[n2];
	
	for(i=0;i<n1;i++)
	{
		b[k]=a[lb+i];
	}
	
	for(i=0;i<n2;i++)
	{
		c[k]=a[mid+1+i];
	}
	
	i=0,j=0,k=lb;
	while(i<n1 && j<n2)
	{
		if(b[i]<c[j])
		{
			a[k]=b[i];
			k++;i++;
		}
		else
		{
			a[k]=c[j];
			j++;k++;
		}
	}
	
	
		while(i<n1)
		{
			a[k]=b[i];
			i++;k++;
		}
		
		while(j<n2)
		{
			a[k]=c[j];
			k++;j++;
		}
		
	
}


void mergesort(int a[],int lb,int ub)
{
	
	if(lb<ub)
	{
		int mid=(lb+ub)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merging(a,lb,mid,ub);
		
	}
	
}

void main()
{
	int i;
	int a[]={92,26,35,45,75,65,25};
	int size = sizeof(a)/sizeof(a[0]);
	int lb=0 , ub=size-1; 
	mergesort(a,lb,ub);
	for(i=0;i<size;i++)
	{
		printf(" %d ",a[i]);
	}
	
}
