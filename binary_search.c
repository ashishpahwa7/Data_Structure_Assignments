#include<stdio.h>
int bsearch(int A[] , int , int );

int main()
{
	int A[100],elem,res,size,i;
	
	printf("Enter number of elements to inserted  : ");
	scanf("%d", &size);
	
	for(i=0;i<size;i++)
	scanf("%d",&A[i]);

	printf("Now the array is : ");

	for(i=0;i<size;i++)
	printf("%d ",A[i]); 

	printf("\nEnter element to be searched for");
	scanf("%d",&elem);

	res=bsearch(A,size,elem);

	printf("Element found at index %d \n ",res);
}

int bsearch( int A[] , int size, int elem)
{
	int beg , last , mid;

	beg=0,last=size-1;

	while(beg<=last)
	{
		mid=(beg+last)/2;

		if(A[mid]<elem)  beg=mid+1;

		else if(A[mid]>elem) last=mid-1;

		else
			return mid;
	}
}
