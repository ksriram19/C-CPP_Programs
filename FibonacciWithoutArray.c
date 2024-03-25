
#include <stdio.h>
main()
{
	int fib1, fib2, fib3;
	int i, n;
	
	printf("Enter number of elements in the series ");
	scanf("%d", &n);

	fib1 = 0;
	fib2 = 1;

	printf("Fibonacci Numbers ");

	printf("%d\t%d", fib1, fib2);
	      
	for(i=2; i<n; i++)
	{
		fib3 = fib1 + fib2;
		printf("\t%d", fib3);
		
		fib1 = fib2;
		fib2 = fib3;

	}
}

