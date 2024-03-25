#include <stdio.h>
#include <math.h>

main()
{

	/* Function Prototype */
	int isprime(int); 
	
	int n, m, i, flag;
	
	printf("Enter a range to find the primes within:\n");
	printf("LowerBound =\n");
	scanf("%d", &n);

	printf("UpperBound =\n");
	scanf("%d", &m);
	   
	if ( n > m )
		printf("Invalid range entered\n");
	else
	{
		printf("Prime Numbers between %d and %d are: \n", n, m);
		
		for( i=n; i<=m; i++)
		{
			flag = isprime(i);
			if (flag) printf("%d\t", i);
		}
	}
}

int isprime(int n)
{

	int i, u, f=1;
	
	u = (int) sqrt(n);
	
	for( i=2; i<= u && f; i++)
		if ((n%i) == 0) f = 0;
	return f;
}



