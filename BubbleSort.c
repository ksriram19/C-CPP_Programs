
#include <stdio.h>
main()
{
	int a[100];
	int i, n, j, t;
	
	printf("Enter number of elements ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	
	printarray(a, n);
	
	for(i=1; i<n; i++)
	{
		printf("\nPass Number: %d  =====>>>>>\n", i);
   	    
		for(j=0; j<n-i; j++)
		{
			printf("\nComparing a[%d]: %d and a[%d]: %d\n", j, a[j], j+1, a[j+1]);

			if(a[j] > a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
			printarray(a, n);
		}

		printf("\n\tAfter Pass %d, List appears as:\n", i);
		printarray(a,n);

	}
	printf("\nList in the sorted order\n");
	printarray(a, n);

}

printarray(int b[], int n)
{
	int i;
	
	for(i=0; i<n; i++)
		printf("\t%d", b[i]);
}

