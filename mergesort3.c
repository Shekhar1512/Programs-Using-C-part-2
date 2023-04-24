#include<stdio.h>
void mergesort(int a[],int l,int r);	
void merge(int a[],int l,int mid,int r);

void merge(int a[],int l,int mid,int r)
{
	int i;
	int n1 = mid-l+1;
	int n2 = r-mid;
	int b[n1];
	int c[n2];
	
	for(i=0;i<n1;i++)
	{
		b[i]=a[l+i];
	}
	
	for(i=0;i<n2;i++)
	{
		c[i]=a[mid+1+i];
	}
	int k=l;
	 i=0; int j=0;
	while(i<n1 && j<n2)
	{
		if(b[i]<c[j])
		{
			a[k]=b[i];
			i++;k++;
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
		j++;k++;
	}
	
	
}	

void mergesort(int a[],int l,int r)
{
	if(l<r)
	{
		int mid=(l+r)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,r);
		merge(a,l,mid,r);
	}
}

void main()
{
	int i;
	int a[]={10,5,20,2,30};
	int n=5;
	int l=0,r=n-1;
	mergesort(a,l,r);
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	
	
}
