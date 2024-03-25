
#include <stdio.h>
#include <string.h>
#include <ctype.h>

main()
{
	
	char str[100];
	int i, length, count=0;
	
	printf("Enter a string\n");
	gets(str);
	
	length = strlen(str);
	
	for(i=0; i<length; i++)
		switch(toupper(str[i]))
		{
			case 'A'	:
			case 'E'	:
			case 'I'	:
			case 'O'	:
			case 'U'	:	count++;
		
		}
	
	printf("\n%d Vowels occur in the given string %s", count, str);

}

