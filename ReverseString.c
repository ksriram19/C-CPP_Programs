
#include <stdio.h>
#include <string.h>
main()
{
	char text[100], revtext[100];
	int i, length;
	
	printf("Enter a string\n");
	gets(text);
	
	length = strlen(text);
	
	for(i=0; i<length; i++)
		revtext[i] = text[length - i - 1];
		
	revtext[length] = '\0';
	
	printf("\nReversed string is %s", revtext);

}

