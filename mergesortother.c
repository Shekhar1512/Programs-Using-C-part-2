#include<stdio.h>
void mergesort(int *, int ,int  );
void merge(int arr[],int l,int mid,int r);


void merge(int arr[],int l,int mid,int r)
{
	int i;
	int n1 = mid-l+1;
	int n2 = r-mid;
	
	int a[n1];
	int b[n2];
	
	for(i=0;i<n1;i++)
	{
		a[i]=arr[l+i];
	}
	
	for(i=0;i<n2;i++)
	{
		b[i]=arr[mid+1+i];
	}
	i=0;
    int 	j=0,k=l;
	while(i<n1 && j<n2 )
	{
		if(a[i]<b[j])
		{
			arr[k]=a[i];
			k++; i++;
		}
		else
		{
			arr[k]=b[j];
			k++; j++;
		}
	}

		while(i<n1)
		{
			arr[k]=a[i];
			k++;i++;
		}
		
		while(j<n2)
		{
			arr[k]=b[j];
			k++;j++;
		}
	
	
	
	
	
}



void  mergesort(int arr[],int l,int r)
{
	if(l<r)
	{
	int mid = (l+r)/2;
	mergesort(arr,l,mid);
	mergesort(arr,mid+1,r);
    merge(arr,l,mid,r);
	}
}


void main()
{
	int i;
	int arr[]={5,4,3,2,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	int l=0;
	int r= size-1;
	
	
	mergesort(arr,l,r);
	
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf(" %d ",arr[i]);
	}

}
