

#include <stdio.h>
main()
{

	int a[10][10], i, j, m, n, scalar_element, scalar_matrix;

	printf("No of rows\n");
	scanf("%d", &m);
	printf("No of columns\n");
	scanf("%d", &n);	
	
	scalar_matrix = 1;
	
	for (i=0; i<m; i++)
		for (j=0; j<n; j++)
			scanf("%d", &a[i][j]);

	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}   

	if (m == n)
	{
		printf("Matrix is Square");
		
		scalar_element = a[0][0];
		for (i=0; i<m; i++)
			for (j=0; j<n; j++)
			{
				if (i == j)
				{
				  if (a[i][j] != scalar_element) scalar_matrix = 0;
				}
				else
				{
					if (a[i][j] != 0) scalar_matrix = 0;
				}
			}
		if (scalar_matrix == 1)
			printf("\nMatrix is Scalar");
		else
			printf("\nMatrix is not Scalar");
	}
	else
		printf("Matrix is Rectangular");
}
 

