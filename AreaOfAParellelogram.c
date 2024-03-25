
#include <stdio.h>

main()

{

	int a[100];
	int n, i, item, loc = -1;
	
	printf("Enter number of elements");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);	   

	printf("Enter number to be searched");
	scanf("%d", &item);
	
	for(i=0; i<n; i++)
		if(item == a[i])
		{
			loc = i;
			break;
		}
	
	if (loc >= 0)
		printf("\n%d is found in position %d", item, loc + 1);
	else
		printf("\n%d is not found in the list",item);

}

