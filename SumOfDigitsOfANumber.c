#include <stdio.h>

main()
{

	int sum_of_digits(int); /* Function Prototype */

	int num_of_digits(int);

	int num, sum, n;
	
	printf("Enter a number \n");
	scanf("%d", &num);
	
	/*
	printf("The number is %d\n", num);
	printf("Number of digits it has = %d\n", num_of_digits(n));
    */
	
	n = num;
	
	/*
	while ( n>9 )
	{
		sum = sum_of_digits(n);
		n = sum;	
	}	 
	*/
	sum = sum_of_digits(n);

	printf("The number is %d\n", num);
	printf("Sum of digits till it becomes single digit = %d\n", sum);

}

int sum_of_digits(int n)
{

	int d, s=0;
	
	while( n>0 )
	{
		d = n%10;
		n = n/10;
		s = s+d;
	}
	
	return s;
}

int num_of_digits(int n)
{
	int count = 0;
	
	while( n>0 )
	{
		n /= 10;
		++count;
	}
	
	return (count);
}


