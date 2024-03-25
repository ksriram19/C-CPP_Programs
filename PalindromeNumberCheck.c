#include <stdio.h>

main()
{

	/* Function Prototype */
	int reverse(int); 
	
	int num, rev, n;
	
	printf("Enter a number \n");
	scanf("%d", &num);
	
	rev = reverse(num);
	
	if ( num == rev )
		printf("The given number %d is a palindrome\n", num);
	else
		printf("The given number %d is not a palindrome\n", num);

}

int reverse(int n)
{

	int r, s=0;
		
	while( n>0 )
	{
		r = n%10;
		n = n/10;
		s = s * 10 + r;
	}
	
	return s;
}


