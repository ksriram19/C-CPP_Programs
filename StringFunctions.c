
#include <stdio.h>
#include <string.h>
#include <ctype.h>
main()
{
	char str[100];
	int upalpha=0, lowalpha=0, digit=0, special=0, length, i;
	
	printf("Enter a string ");
	gets(str);
	
	length=strlen(str);
	
	for(i=0; i<length; i++)
		if(isupper(str[i])) upalpha++;
		else 
			if(islower(str[i])) lowalpha++;
			else 
				if(isdigit(str[i])) digit++;
			 	else special++;

	printf("\nNumber of uppercase = %d", upalpha);
	printf("\nNumber of lowercase = %d", lowalpha);
	printf("\nNumber of digit = %d", digit);
	printf("\nNumber of special = %d", special);
}

