#include <stdio.h>

main()
{

	/* Function Prototype */
	int GCD(int, int); 
	
	int a, b, g, l;
	
	printf("Enter the numbers A and B:\n");
	scanf("%d %d", &a, &b);

	g = GCD(a, b);
	
	l = (a * b) / g;

	printf("GCD of %d and %d = %d\n", a, b, g);
	printf("LCM of %d and %d = %d\n", a, b, l);
	
}

int GCD(int x, int y)
{
	while ( x!=y )
		if ( x>y )
			x = x-y;
		else
			y = y-x;
			
	return x;
}



