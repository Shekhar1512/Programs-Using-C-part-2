//socks merchant
#include<stdio.h>
int i,pair,n,j,n2=0,k,count=0;
int socks(int*,int);
void main()
{
	int input[]={20,20,10},i,n,j,k;
	n=sizeof(input)/sizeof(input[0]);
	pair=socks(input,n);
	printf("%d no of pairs\n\n",pair);

	
}


int socks(int input[],int n)
{
	
	for(i=1;i<n-n2;i++)
	{
			
		for(j=i+1;j<=n-n2;j++)
		{printf("initial %d\n\n",count);
			if(input[i]==input[j])
			{
				 count++;
				 
	printf("initial %d\n\n",count);
	
				 for(k=j;k<n-n2;k++)
				 {
				 	input[k]=input[k+1];
				 }
				n2=n2+1;
			}
		}
		

	}
	printf(" final = %d\n\n",count);
	
	if(count%2==0)
	{
		
		return count;
	}
	else
	{
		return count;
	}
	

}
