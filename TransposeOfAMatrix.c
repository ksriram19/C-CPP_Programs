
#include <stdio.h>

main()

{

	int a[10][10], t[10][10];
	int m, n, i, j;
	
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

	printf("\nTranspose of Matrix A is\n");	   
	printmatrix(t, n, m);

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


