
#include <stdio.h>

main()

{
	int i, j;

	int marks[5] = {56, 67, 15, 98, 12};
	
	int b[2][3] = {1, 2, 3, 4, 5, 6};
	
	int c[3][3] = {1, 2, 3, 4, 5, 6};

	printf("\nList A (Single Dimensional Array) is\n");
	for (i=0; i < 5; i++)
		printf("%d\t", marks[i]);

	printf("\n");
	printf("\nMatrix B (Two Dimensional Array) [Fully Initialized] is\n");

	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
			printf("%d\t", b[i][j]);	
		printf("\n");
	}

	printf("\n");
	printf("\nMatrix C (Two Dimensional Array) [Partially Initialized] is\n");

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
			printf("%d\t", c[i][j]);	
		printf("\n");
	}

}


