#include <stdio.h>

main()
{

	int num;
	int sum(int);
	
	printf("Enter any integer:\n");
	scanf("%d", &num);

	printf("Sum of %d natural numbers = %d\n", num, sum(num));

}

int sum(int n)
{
	if ( n==0 )
		return 0;
		
	return ( n + sum(n-1) );
}


