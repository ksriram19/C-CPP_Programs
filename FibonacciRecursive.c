#include <stdio.h>

main()
{

	int 	i, n;
	
	int fibo(int);
		
	printf("Enter the number of elements in the series:\n");
	scanf("%d", &n);

	printf("Fibonacci numbers\n");
	for (i=1; i<=n; i++)
		printf("%d\t", fibo(i));
			
}

int fibo(int n)
{
	if ( n==1 )
		return 0;
	else if ( n==2 )
		return 1;
	else
		return fibo(n-1) + fibo(n-2);

}



