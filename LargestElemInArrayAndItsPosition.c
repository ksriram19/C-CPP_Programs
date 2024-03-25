#include <stdio.h>

main()
{

	int a[100];

	int largest, position, num, index; 

	printf("Enter the number of elements in the array:\n");
	scanf("%d", &num);

	printf("Enter the array elements:\n");
	
	for (index=0; index < num; index++)
		scanf("%d", &a[index]);

	printf("<<Initialization>>\n");
	printf("------------------\n");

	largest = a[0]; /* Assign 1st element of the array as largest */
	position = 1; /* Store the position */

	printf("Assign 1st element of the array as largest. So, Largest: %d and Position: %d\n", largest, position);

	printf("<<Flow Demonstration>>\n");
	printf("----------------------\n");
	
	for (index = 1; index < num; index++)
	{

		printf("\nPosition: %d\n", index+1);
	   
		if (largest < a[index])
		{
			printf("a[index] %d > Largest %d. Update the status\n", a[index], largest);

			largest = a[index];
			position = index + 1;
			printf("NEW Largest: %d and NEW Position: %d\n", largest, position);
		}
		else
			printf("a[index] %d <= Largest %d. Move on to the next number in the array.\n", a[index], largest);

	}	 	 
	printf("\nEND OF SEARCH: Largest element in the array is %d and its position is %d\n", largest, position);
	
}

