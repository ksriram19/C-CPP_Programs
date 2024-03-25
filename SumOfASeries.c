#include <stdio.h>

main()
{
	/* Find the Sum of the Series: 1 + 1/3! + 1/5! + 1/7! + ... + 1/N! */

	int n;
	
	float sum(int);
		
	printf("Enter the limit of the series:\n");
	scanf("%d", &n);

	printf("Sum of the Series is %f\n", sum(n));
			
}

float sum(int n)
{
	int i, f;
	float s=0, t;
	
	int fact(int);
	
	for ( i=1; i<=n; i+=2 )
	{
		f = fact(i);
		t = (float) 1/f;
		s = s + t;
	}
	
	return s;
}

int fact(int n)
{
	if ( n==1 )
		return 1;
	
	return ( n * fact(n-1) );
}


