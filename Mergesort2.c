#include<stdio.h>
void mergesort(int *,int ,int);
void merging(int *,int ,int ,int);

void merging(int a[],int l,int p,int r)
{
	int i;
	int n1= p-l+1;
	int n2=r-p;
	int b[n1];
	int c[n2];
	int k;
	for(i=0;i<n1;i++)
	{
		b[i]=a[l+i];		
	}
	for(i=0;i<n2;i++)
	{
		c[i]=a[p+1+i];		
	}
	 i=0;
	int j=0;
	k=l;
	while(i<n1 && j <n2)
	{
		if(b[i]<c[j])
		{
			a[k]=b[i];
			k++;i++;
		}
		else
		{
			a[k]=c[j];
			k++;j++;
		}
	}
	

		while(i<n1)
		{
			a[k]=b[i];
			k++;i++;
		}
		while(j<n2)
		{
			a[k]=c[j];
			k++;j++;
		}
	
	
	
}

void mergesort(int a[],int l ,int r)
{
	if(l<r)
	{
		int p = (l+r)/2;
		mergesort(a,l,p);
		mergesort(a,p+1,r);
		merging(a,l,p,r);
		
	}
}



void main()
{
	int i;
	int a[]={9,8,7,6,5};
	int size = sizeof(a)/sizeof(a[0]);
	int l=0;
	int r=size-1;
	mergesort(a,l,r);
	for(i=0;i<size;i++)
	{
		printf(" %d ",a[i]);
	}
	
}
