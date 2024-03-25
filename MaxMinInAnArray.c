#include <stdio.h>

main()
{

	int a[100];

	int max, min, maxpos, minpos, num, index; 

	printf("Enter the number of elements in the array:\n");
	scanf("%d", &num);

	printf("Enter the array elements:\n");
	
	for (index=0; index < num; index++)
		scanf("%d", &a[index]);

	printf("<<Initialization>>\n");
	printf("------------------\n");

	max = a[0]; /* Assign 1st element of the array as max */
	min = a[0]; /* Assign 1st element of the array as min */
	maxpos = 1;
	minpos = 1;

	printf("Assign 1st element of the array as max and min. So, Max: %d at Posn %d and Min: %d at Posn %d\n", max, min, maxpos, minpos);

	printf("<<Flow Demonstration>>\n");
	printf("----------------------\n");
	
	for (index = 1; index < num; index++)
	{

		printf("\nPosition: %d\n", index+1);
	   
		if (max < a[index])
		{
			printf("Value %d > Max %d. Update the status\n", a[index], max);

			max = a[index];
			maxpos = index + 1;
			printf("NEW Max: %d and NEW MaxPosn: %d\n", max, maxpos);
		}
		else
			printf("Value %d <= Max %d. First Check Min, and then move on to next number in the array.\n", a[index], max);


		if (min > a[index])
		{
			printf("Value %d < Min %d. Update the status\n", a[index], min);

			min = a[index];
			minpos = index + 1;
			printf("NEW Min: %d and NEW MinPosn: %d\n", min, minpos);
		}
		else
			printf("Value %d >= Min %d. So, move on to next number in the array.\n", a[index], min);

	}	 	 
	printf("\nEND OF SEARCH\n");
	printf("Max  element in the array is %d at %d\n", max, maxpos);
	printf("Min element in the array is %d at %d\n", min, minpos);
	         
}

