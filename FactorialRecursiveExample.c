#include <stdio.h>

main()
{

	int n;
	int fact(int);
	
	printf("Enter any non negative integer:\n");
	scanf("%d", &n);

	if (n<0)
		printf("Invalid Input\n");
	else
		printf("Factorial of %d = %d\n", n, fact(n));

}

int fact(int n)
{
	if ( n==0 )
		return 1;
		
	return ( n*fact(n-1) );
}


