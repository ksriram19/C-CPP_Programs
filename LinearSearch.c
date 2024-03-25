#include <stdio.h>

main()
{

	int a[100];

	int item, num, index, pos = -1; 

	printf("Enter the number of elements in the array:\n");
	scanf("%d", &num);

	printf("Enter the array elements:\n");
	
	for (index=0; index < num; index++)
		scanf("%d", &a[index]);

	printf("Enter the number to be searched in the list:\n");
	scanf("%d", &item);


	printf("<<Flow Demonstration>>\n");
	printf("----------------------\n");
	
	for (index = 0; index < num; index++)
	{

		printf("\nPosition: %d", index+1);
	   
		if (item == a[index])
		{
			printf(" - Value %d MATCHes with Item %d. Break from search now.\n", a[index], item);

			pos = index + 1;
			break;
		}
		else
			printf(" - Value %d MISMATCH with Item %d. Move on to next number in the list.\n", a[index], item);

	}	 	 
	
	printf("\nEND OF SEARCH\n");
	if (pos >=  0)
	   printf("Item %d was found at position %d\n", item, pos);
	else
	   printf("Item %d is not present in the list", item);
	   
}

