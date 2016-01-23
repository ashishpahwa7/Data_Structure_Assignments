#include<stdio.h>

#define MAX 20 
//Driver function 
int main()
{
    int arr[MAX],i,size,choice;

    printf("Enter number of elements to be inserted (Maximum 20 ) : ");
    scanf("%d",&size);

    
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);

  


    traverse(arr,size);

while(1)
{

    printf("\t\t\n\t\t Select Array opertaion (Press 0 to exit ) : \n");
    printf("1.Insert new element at desired index (without replacement)\n");
    printf("2.Insert new element at desired index (with replacement)\n");

    printf("3.Search and add a new element before the search element \n");
    printf("4.Search and replace the search element with a new element\n");

    printf("5.Delete an element (Search by index)\n");
    printf("6.Delete an element (Search by value)\n");

    printf("7.Print array in reverse order \n");
	 	    
                  
    scanf("%d", &choice);


    switch(choice)
    {

      case 0 : printf("Exiting...\n");
    		return 0;	
	
      case 1 : insert_pos(arr,size);     
		size++;
                break;
      case 2: insert_and_replace(arr,size);
	        break;

      case 3: search_and_insert(arr,size);
		size++;
		break;
      case 4: search_and_replace(arr,size);
		break;
      case 5: Delete_by_index(arr,size);
		size--;
		break;
      case 6:Delete_by_value(arr,size);
		size--;
		break;

      case 7:reverse_traverse(arr,size);
		break;
	
     default : printf("Wrong choice..Please try again with a correct input(1-7)");  
  
    }

	
}

}

//******************************************************************************************************************************//
// Function to traverse 

int traverse(int *arr,int size)
{

    int i;
      printf("Now the Array is : ");
      for(i=0;i<size;i++)
       printf("%d ", arr[i]);
    printf("\n");

}

//*********************************************************************************************************************


int insert_pos(int *arr ,int size )
{
        int i,elem,pos;
        printf("Enter element to be inserted : ");
        scanf("%d",&elem);
	label:
        printf("\nEnter index : ");
        scanf("%d",&pos);

	if(pos == size )
	{
		arr[pos]=elem;
		traverse(arr,size+1);
		return 0;
	}

	if(pos>size) 
	{
	printf("Next element canot be inserted in discontinuos manner. Please select another position\n");
	goto label;
	}
	
//Creating space for new element
        for(i=size;i>=pos;i--)  
        arr[i]=arr[i-1];

//Inserting new element
           arr[pos]=elem;
           traverse(arr,size+1);
}

//**********************************************************************************************************************
int insert_and_replace(int *arr , int size)
{

	int index ,elem;
	printf("Enter element to be inserted : ");
	scanf("%d" , &elem);
	printf("Enter desired index : ");
	scanf("%d", &index);
	
	arr[index]=elem;

	traverse(arr,size);

}

//************************************************************************************************************************
int search_and_insert(int *arr , int size )
{
	int i,index,elem,elem1;
	
	printf("Enter element to be searched for : ");
	scanf("%d" , &elem);
	printf("Enter element to be inserted");
	scanf("%d",&elem1);

//searching index 
	for(i=0;i<size;i++)
	{
		if(arr[i]==elem)
		{
		index=i;
		break;
		}
	}

//creating space at index

            for(i=size;i>=index;i--)  
             arr[i]=arr[i-1];

//inserting element 

             arr[index]=elem1;
             traverse(arr,size+1);	

}
//******************************************************************************************************************************
int search_and_replace(int *arr ,int size)
{
	int i ,index, elem ,elem1;

	printf("Enter element to be searched for : ") ;
	scanf("%d",&elem);;
	
//retrieving index 
	for(i=0;i<size;i++)
	{
		if(arr[i]==elem)
		{
		index=i;
		break;
		}
	  
       }

	if(index==size)
	{ 
        printf("Element not found");
	return 0;
        } 
	
        printf("\nEnter element to be replaced with : ") ;
	scanf("%d",&elem1);


//inserting element 
	arr[index]=elem1;
	traverse(arr,size);
	
}


//***********************************************************************************************************************
int Delete_by_index(int *arr,int size)
{
	
int index,i;
	printf("Enter index value at which the element has to be deleted : ");
	scanf("%d", &index);

	arr[index]=0;

	for(i=index;i<size-1;i++)
	arr[i]=arr[i+1];
	
	
	traverse(arr,size-1);	

}




//************************************************************************************************************************
int Delete_by_value(int *arr , int size ) 
{
	int i , index , elem ;

	printf("Enter the element to be deleted : ") ;
	scanf("%d", &elem);

//retrieving index 

for(i=0;i<size;i++)
	{
		if(arr[i]==elem)
		{
		index=i;
		break;
		}
	  
       }

	if(index==size)
	{ 
        printf("Element not found");
	return 0;
        } 
	
	arr[index]=0;

	for(i=index;i<size-1;i++)
	arr[i]=arr[i+1];
	
	
	traverse(arr,size-1);	


}

//***************************************************************************************************************************
int reverse_traverse(int *arr , int size ) 
{

int i;

	
	printf("The array printed in reverse order : ") ;
	for(i=size-1;i>=0;i--)
	printf("%d " , arr[i]);

return 0;

}


//*******************************************************************************************************************************

	

