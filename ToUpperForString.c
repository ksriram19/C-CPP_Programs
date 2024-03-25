
#include <stdio.h>

main()
{
	char str[100];
	
	int i=0;
		
	printf("Enter a string:\n");
	gets(str);

	while (str[i] != 0)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] = str[i] - 32;
			i++;
	}	 

	printf("\nConverted string in Uppercase is %s\n", str);

}


