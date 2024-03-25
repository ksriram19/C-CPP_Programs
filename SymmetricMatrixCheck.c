
#include <stdio.h>

main()

{

	int a[10][10], t[10][10];
	int m, n, i, j, symmetric, skewsymmetric;
	
	printf("Enter the order of the matrix:\n");
	printf("# of Rows - ");
	scanf("%d", &m);
	printf("# of Columns - ");
	scanf("%d", &n);

	printf("Enter matrix elements\n");	  
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			scanf("%d", &a[i][j]);	  

	printf("\nMatrix A is\n");
	printmatrix(a, m, n);
	
	for(j=0; j<n; j++)
		for(i=0; i<m; i++)
			t[j][i] = a[i][j];

	printf("\nTranspose of Matrix A, A' is\n");	   
	printmatrix(t, n, m);

	printf("\nCheck whether A=A' or A=-A'. If A=A', then A is a Symmetric Matrix. If A=-A', then A is a Skew Symmetric Matrix.\n");
	
	symmetric = 1; /* Assume that matrix is Symmetric */

	   
	/* First check if A is a Square matrix. i.e., dim(Rows) = dim(Cols) */
	if ( m != n )
		symmetric = 0;
	else
	{
		printf("\n<<<Intermediate Results>>>\n");
	   	
		for(i=0; i<n-1; i++)
			for(j=i+1; j<n; j++)
			{
				if ( a[i][j] - a[j][i] != 0 ) symmetric = 0;
				printf("\na[i,j] - a[j,i] is a[%d,%d] - a[%d,%d] = %d, Symmetric = %d\n", i, j, j, i, a[i][j] - a[j][i], symmetric);  	  
			}
	}

	/* Check if it is a Skew Symmetric matrix where A=-A' and a[i,j] = -a[j,i] */
	if (!symmetric)
	{
	
		skewsymmetric = 1; /* Assume that matrix is Skew Symmetric */

		printf("\n<<<Intermediate Results>>>\n");
	   	
		for(i=0; i<n-1; i++)
			for(j=i+1; j<n; j++)
			{
				if ( a[i][j] + a[j][i] != 0 ) skewsymmetric = 0;
				printf("\na[i,j] + a[j,i] is a[%d,%d] + a[%d,%d] = %d, SkewSymmetric = %d\n",  i, j, j, i, a[i][j] + a[j][i], skewsymmetric);  	   
			}
	}


	if (symmetric)
		printf("\nGiven Matrix is Symmetric since A=A' where a[i,j] = a[j,i]\n");	 
	else 
		if (skewsymmetric)
			printf("\nGiven Matrix is Skew Symmetric since A=-A' where a[i,j]=-a[j,i]\n");	  
		else
			printf("\nGiven Matrix is neither Symmetric nor Skew Symmetric\n");

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


