#include <stdio.h>

main()
{

	int a[10]; /* Max No. of elelments in the array is 10 */

	int i, n; /* i is the index for loop and n is total no. of elements in the array <= Max No. of elements */	  

	printf("Enter the number of elements in the array:\n");
	scanf("%d", &n);

	printf("Enter the array elements:\n");
	
	for (i=0; i<n; i++)
		scanf("%d", &a[i]);
		
	printf("Array elements are:\n");
	
	for (i=0; i<n; i++)
		printf("%d\t", a[i]);
	   
}


