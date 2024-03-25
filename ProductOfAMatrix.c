#include <stdio.h>

main()
{

	int a[10][10], b[10][10], c[10][10];
	int m, n, p, i, j, k;

	/* Details of Matrix A */
	printf("Enter the order of the matrix A:\n");
	printf("# of Rows - ");
	scanf("%d", &m);
	printf("# of Columns - ");
	scanf("%d", &n);

	printf("Enter matrix elements\n");
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &a[i][j]);

	printf("\nMatrix A is\n");
	printmatrix(a, m, n);

	/* Details of Matrix B */
	printf("Complete the order of the matrix B. # of Rows it has is %d\n", n);
	printf("# of Columns - ");
	scanf("%d", &p);

	printf("Enter matrix elements\n");
	for (i = 0; i < n; i++)
		for (j = 0; j < p; j++)
			scanf("%d", &b[i][j]);

	printf("\nMatrix B is\n");
	printmatrix(b, n, p);

	/* Product of Matrices A and B */
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			c[i][j] = 0;
			for (k = 0; k < p; k++)
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
		}
	printf("\nProduct of Matrix A and B, AxB is\n");
	printmatrix(c, m, p);
}

printmatrix(int a[][10], int rows, int cols)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
}

