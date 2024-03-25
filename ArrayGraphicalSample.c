
#include <stdio.h>

main()

{
	int i, j;

	int marks[5] = {65, 65, 6553, 66, 65};
	
	int b[2][3] = {1, 2, 3, 4, 5, 6};
	
	int c[3][3] = {1, 2, 3, 4, 5, 6};

	printf("\nList A (Single Dimensional Array) is\n");

	printf("|");
	for (i=0; i < 5 * 8 - 1; i++)
	{
		printf("-");
	}
	printf("|\n");

	for (i=0; i < 5; i++)
	{
		printf("| %d ", marks[i]);
	}
	printf("|\n");

	printf("|");
	for (i=0; i < 5 * 8 - 1; i++)
	{
		printf("_");
	}
	printf("|\n");

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


