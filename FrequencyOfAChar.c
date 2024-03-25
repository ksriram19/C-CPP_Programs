
#include <stdio.h>
#include <string.h>
main()
{
	char ch, text[100];
	int i, length, count=0;
	
	printf("Enter a string\n");
	gets(text);
	
	puts("Enter a character to be searched ");
	scanf("%c", &ch);
	length = strlen(text);
	
	for(i=0; i<length; i++)
		if( text[i]==ch ) count++;
	
	if(count)
		printf("\n%c occurs %d times", ch, count);
	else
		printf("\n%c does not exist in the text", ch);
}

