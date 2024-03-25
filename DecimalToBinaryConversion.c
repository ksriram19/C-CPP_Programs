
#include <stdio.h>
main()
{
	auto int dec, bin;
	int dec_to_bin(int);
	
	printf("Enter a decimal number\n");
	scanf("%d", &dec);
	bin = dec_to_bin(dec);
	printf("The decimal number is = %d\n",dec);	   
	printf("The binary number is = %d\n",bin);
}

int dec_to_bin(int d)
{
	auto int b, r, k;
	
	b = 0;
	k = 1;
	
	while ( d>0 )
	{

 		r = d % 2;
	      	   
		d = d / 2;
		
		b = b + r * k;
		
		k = k * 10;
	}
	return b;
}


