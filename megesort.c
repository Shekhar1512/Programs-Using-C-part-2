#include<stdio.h>
void mergesort(int [] ,int ,int);
void merge(int [],int ,int ,int);
void main()
{
	int i;
	int a[]={5,4,3,2,1};
    int size= sizeof(a)/sizeof(a[0]);
    int l=0;
	int r=size-1;
	mergesort(a,l,r);
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf(" %d ",a[i]);
	}

	
}


void  mergesort(int a[],int l,int r)
{
	if(l<r)
	{
	int mid = (l+r)/2;
	mergesort(a,l,mid);
	mergesort(a,mid+1,r);
	merge(a,l,mid,r);
    }
}


void merge(int a[],int l, int mid ,int r)
{
	int b[5];
	int i=l;
	int j=mid+1;
	int k=l;
	while(i<=mid && j<= r)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++; 
		}
		k++;  
	}
	

		while(j<=r)
		{
			b[k]=a[j];
			k++; j++;
		}
	

		while(i<=mid)
		{
			b[k]=a[i];
			k++; i++;
		}
	


	for(i=0;i<5;i++)
	{
		printf(" %d ",b[i]);
	}
printf("\n\n");
	
	
}























