#include <stdio.h>

main()
{
	int a[100];
	int low, high, mid, i, n, ele, loc, sorted, min;

	printf("Enter the size of the list:\n");
	scanf("%d", &n);

	printf("Enter the elements in the list\n");

	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	printf("\nEnter the element to be searched in the list:\n");
	scanf("%d", &ele);

	sorted = issorted(a, n);

	printf("\nList A is\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}

	/* Initialization for Binary Search */
	if (sorted)
	{
		low = 0;
		high = n - 1;
		loc = -1;

		while ( low <= high )
		{
			mid = (low + high ) / 2;

			if ( ele == a[mid] )
			{
				loc = mid;
				break;
			}

			if ( ele < a[mid] )
				high = mid - 1;
			else
				low = mid + 1;
		}

		if ( loc >= 0 )
			printf("\nElement %d was found at location %d\n", ele, loc + 1);
		else
			printf("\nElement %d was not found in the list\n", ele);
	}
	else
		printf("\nThe list is unsorted. So, Binary Search cannot be used\n");
}

int issorted(int a[], int n)
{
	int i, sorted, low = a[0];

	sorted = 1;

	for (i = 1; i < n; i++)
	{
		if (low > a[i])
		{
			/* printf("\nInside Function --- low = %d, a[%d] = %d\n", low, i, a[i]); */
			sorted = 0;
			break;
		}

		low = a[i];
	}

	return sorted;
}

