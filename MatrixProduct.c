
#include <stdio.h>
main()
{
	int a[10][10], b[10][10], c[10][10], row, col, k, order;
	
	printf("Enter the order of the matrix ");
	scanf("%d", &order);
	
	printf("\nInput A matrix elements\n");
	for(row=0; row<order; row++)
		for(col=0; col<order; col++)
			scanf("%d", &a[row][col]);
			
	printf("\nInput B matrix elements\n");
	for(row=0; row<order; row++)
		for(col=0; col<order; col++)
			scanf("%d", &b[row][col]);
	   
	/* Find the product of two matrices */
	
	for(row=0; row<order; row++)
		for(col=0; col<order; col++)
		{
			c[row][col]=0;
			for(k=0; k<order; k++)
				c[row][col]=c[row][col] + a[row][k] * b[k][col];
		}
		
	printf("\nProduct Matrix \n");

	for(row=0; row<order; row++)
	{
		for(col=0; col<order; col++)
			printf("%d\t", c[row][col]);
		printf("\n");
	}
}

