#include <stdio.h>

main()
{

	float 	x;
	int 	n;
	
	float power(float, int);
	
	printf("Enter the base (X):\n");
	scanf("%f", &x);

	printf("Enter the power (n):\n");
	scanf("%d", &n);

	printf("%.4f to the power of %d (X^n) = %.4f\n", x, n, power(x,n));

}

float power(float x, int n)
{
	if ( n==0 )
		return 1;

	if ( n>0 )
		return ( x * power(x, n-1) );

	return ( (1/x) * power(x, n+1) );
}



