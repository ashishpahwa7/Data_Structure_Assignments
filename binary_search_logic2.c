#include<stdio.h>

int  main()
{
 int A[100], size,beg=0, end,mid;
 int j,i,x,temp;

 printf("Enter size of array: ");
 scanf("%d", &size);
 end = size-1;

 printf("Enter elements below:\n");
 for(i=0; i<size; i++)
	scanf("%d", &A[i]);

 printf("Enter element to search: ");
 scanf("%d", &x);

 printf("Sorting...");

 for(i=0; i<size; i++)
   {
	 for(j=0; j<size-i-1; j++)
	   {
		 if(A[j] > A[j+1])
		   {
			 temp = A[j];
			 A[j] = A[j+1];
			 A[j+1] = temp;
		   }
	   }
   }


for(i=0;i<size;i++) printf("%d ", A[i]);


 printf("\nSearching...");
	mid = (beg+end)/2;

   while( (beg<=end) &&(A[mid]!=x) )
		{
		  	if(x > A[mid])
			 beg = mid+1;
		  else
		   end = mid-1;

		mid = (beg+end)/2;

		}

  if(A[mid] == x)

	printf("\nElement found at: %d", mid+1);
  else
	printf("\nElement not found");



}
