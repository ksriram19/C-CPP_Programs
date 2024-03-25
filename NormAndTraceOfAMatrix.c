
#include <stdio.h>
#include <math.h>

main()

{

	int a[10][10];
	int n, i, j, sumsquare = 0, trace = 0;
	float norm = 0.0;
	
	printf("Enter the order of the square matrix:\n");
	scanf("%d", &n);

	printf("Enter matrix elements\n");	  
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			scanf("%d", &a[i][j]);	  

	printf("\nMatrix A is\n");
	printmatrix(a, n, n);

	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
	   	{
			if ( i == j )
				trace = trace + a[i][j];
			sumsquare = sumsquare + a[i][j] * a[i][j];	 
			/* printf("\nSumsquare: %d", sumsquare); */
		}
	norm = sqrt(sumsquare);

	printf("\nTrace of the Matrix (Sum of diagonal elements): %d\n", trace);	
	printf("\nNorm of the Matrix (Square Root of Sum of all elements of matrix): %.5f\n", norm);	

}

printmatrix(int a[][10], int rows, int cols)
{
	int i, j;

	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
			printf("%d\t", a[i][j]);	
		printf("\n");
	}
}


