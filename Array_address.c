#include<stdio.h>
#include<math.h>

// Program to verify that C stores a 2-D matrix in row major form .

// As the address difference of 2 consecutive elements stored in a 2D array remains equal to 1 as we move from left to right in a row .

int main()
{
	int mat[5][5],p;

    printf("Addres of A[1][1] = %ld and Address of A[1][2]  %ld \n\n" , &mat[1][1],&mat[1][2] );
    printf("Difference : %ld \n", abs( &mat[1][1]-&mat[1][2] ));

	printf("\nAddres of A[2][1] = %ld and Address of A[1][2]  %ld \n\n" , &mat[2][1],&mat[1][2] );
	printf("Difference : %ld \n", abs( &mat[1][1]-&mat[2][1] ));


}
