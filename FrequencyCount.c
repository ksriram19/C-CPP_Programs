#include <stdio.h>
#include <conio.h>

main()
{

	int num, digit, n, di, count;
	
	printf("Enter the number\n");
	scanf("%d", &num);
	printf("Enter the digit\n");
	scanf("%d", &digit);

	count = 0;
	
	n = num;

	printf("\n<<Interim Result>>\n");
	printf("----------------------");
	      
	while (n > 0)
	{
		di = n%10;
		n = n/10;
		if (di == digit) ++count;
		
		printf("\nExtracted Digit = %d  New Number = %d\n", di, n);
	}
	
	printf("\nNumber = %d\n", num);
	printf("Digit = %d\n", digit);
	printf("Frequency Count = %d", count);
}


