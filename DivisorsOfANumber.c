
#include <stdio.h>

main()
{

	int num, divisor, rem;
	
	printf("Enter a number \n");

	scanf("%d", &num);

	printf("The divisors of %d are 1,",num);

	divisor = 2;
	
	while (divisor <= num / 2)
	{
		rem = num % divisor;
		
   	    if (rem == 0)
			printf(" %d,", divisor);

		divisor++;	  	  	  
	}

	printf(" %d", num);

}


