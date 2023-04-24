#include<stdio.h>
void mergesort(int * , int ,int);
void merge(int *, int lb , int mid , int ub);
int b[6];
int l, p=1,z=1;
int mid;
void main()

{
    int i;
    int a[]={9,11,3,7,6,5};
    int size = sizeof(a)/sizeof(a[0]);
    int lb=0,ub=size-1;
    mergesort(a,lb,ub);
    
}

void mergesort(int a[], int lb,int ub)
{
    if(lb<ub)
    {
     mid = (lb+ub)/2;
    mergesort(a,lb,mid);
    mergesort(a,mid+1,ub);
    merge(a,lb,mid,ub);
    
    }
}


void merge(int a[], int lb , int mid , int ub)
{ 
   printf("array coming %d:- ",p++);
   for( l=0;l<6;l++)
   {
   
   printf(" %d ",a[l]);
}
   printf("\n\n");
   
   
     int i=lb,j=mid+1,k=lb;
     while(i <= mid && j <= ub )
     {
         
         if(a[i]<a[j])
         {
             b[k]=a[i];
             i++; k++;
         }
         else
         {
            b[k]= a[j];
             k++; j++;
         }
     }
     
     if(i>mid)
     {
         while(j<=ub)
         {
            b[k]=a[j];
            k++; j++;
         }
     }
     else
     {
         while(i<= mid)
         {
             b[k] =a[i]; 
             k++ ; i++;
         }
     }
     
   printf("array coming merging %d:- ",z++);
   for( l=0;l<6;l++)
   {
   
   printf(" %d ",b[l]);
}
   printf("\n\n");

     
     
     
     
}































