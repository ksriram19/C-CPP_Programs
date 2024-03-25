#include <stdio.h>

main()
{

	int a, b, c, max;
	
	printf("Enter the 3 number A, B and C:\n");
	scanf("%d %d %d", &a, &b, &c);

	printf("\n<<Illustration of Flow>>\n");
	printf("----------------------------");
	      
	if (a > b)
	{
		printf("\n[A>B]. Next compare A with C \n");
		
		if (a > c)
	   	   	max = a;
		else
			max = c;
	}
	else
	{
		printf("\n[A<=B or B>A]. Next compare B with C \n");
		
		if (b > c)
			max = b;
		else
			max = c;
	}

	printf("Max. of 3 Nos = %d", max);
	   
}


