
#include <stdio.h>
main()
{
	int a[100];
	int i, n;
	
	printf("Enter number of elements in the series ");
	scanf("%d", &n);
	a[0] = 0;
	a[1] = 1;
	
	for(i=2; i<n; i++)
		a[i]=a[i-2] + a[i-1];
	
	printf("Fibonacci Numbers ");
	for(i=0; i<n; i++)
		printf("\t%d", a[i]);
}

