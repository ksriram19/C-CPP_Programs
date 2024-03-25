
#include <stdio.h>

main()

{

	int a[10][10];
	int n, i, j;
	
	printf("Enter the order of the matrix\n");
	scanf("%d", &n);

	printf("Enter matrix elements\n");	  
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			scanf("%d", &a[i][j]);	  

	printf("\nMatrix A is\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			printf("%d\t", a[i][j]);	
		printf("\n");
	}
	
}


